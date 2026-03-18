/*
 * XREFs of DpiReadPnpRegistryValue @ 0x1C01EFEF8
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01550C8 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1C01DD044 (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 *     ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C01E2B7C (-OemSpecifiedViewDist@Win81@@YAIQEAX@Z.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C01EFDDC (DpiQueryAdapterRegistryInfo.c)
 *     DpiFdoHandleStartDevice @ 0x1C01F5800 (DpiFdoHandleStartDevice.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C01F81A0 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C020F214 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C02181E4 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01EFBD0 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall DpiReadPnpRegistryValue(__int64 a1, const WCHAR *a2, char *a3, unsigned int a4, int a5)
{
  __int64 v8; // rcx
  _DWORD *PoolWithTag; // rdi
  __int64 v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  unsigned int v14; // ecx
  size_t v15; // r8
  __int64 v16; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF
  ULONG Length; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  Length = a4 + 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 + 16, 0x74727044u);
  if ( PoolWithTag )
  {
    LODWORD(a1) = DpiOpenPnpRegistryKey(a1, a5, 0x20019u, &KeyHandle);
    if ( (int)a1 >= 0 )
    {
      v11 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, Length, &Length);
      a1 = v11;
      if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
      {
        v14 = PoolWithTag[2];
        v15 = a4;
        if ( a4 > v14 )
          v15 = v14;
        memmove(a3, PoolWithTag + 3, v15);
        v16 = (unsigned int)PoolWithTag[2];
        if ( a4 > (unsigned int)v16 )
          memset(&a3[v16], 0, a4 - (unsigned int)v16);
        LODWORD(a1) = 0;
      }
      else
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdEvent(0x80000000LL, v12);
        v13[4] = a5;
        v13[3] = a1;
        v13[5] = 0LL;
        v13[6] = 0LL;
        WdLogEvent5_WdEvent(v13);
      }
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v8);
    LODWORD(a1) = -1073741801;
    *(_QWORD *)(v10 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v10);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)a1;
}
