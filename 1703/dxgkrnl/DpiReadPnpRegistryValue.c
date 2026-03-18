/*
 * XREFs of DpiReadPnpRegistryValue @ 0x1C01147D0
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AC900 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C01135F8 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0114098 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     DpiFdoHandleStartDevice @ 0x1C01165E0 (DpiFdoHandleStartDevice.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0117980 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C0123284 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1C01BBF84 (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 *     ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C01BFED4 (-OemSpecifiedViewDist@Win81@@YAIQEAX@Z.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C01C2998 (DpiQueryAdapterRegistryInfo.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01148F0 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall DpiReadPnpRegistryValue(__int64 a1, const WCHAR *a2, char *a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rcx
  unsigned int *PoolWithTag; // rdi
  NTSTATUS v10; // eax
  _QWORD *v11; // rax
  __int64 v13; // rax
  size_t v14; // r8
  __int64 v15; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF
  ULONG Length; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  Length = a4 + 16;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, a4 + 16, 0x74727044u);
  if ( PoolWithTag )
  {
    LODWORD(a1) = DpiOpenPnpRegistryKey(a1, a5, 131097LL, &KeyHandle);
    if ( (int)a1 >= 0 )
    {
      v10 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, Length, &Length);
      a1 = v10;
      if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      {
        v14 = a4;
        if ( a4 > PoolWithTag[2] )
          v14 = PoolWithTag[2];
        memmove(a3, PoolWithTag + 3, v14);
        v15 = PoolWithTag[2];
        if ( a4 > (unsigned int)v15 )
          memset(&a3[v15], 0, a4 - (unsigned int)v15);
        LODWORD(a1) = 0;
      }
      else
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdEvent(0x80000000LL);
        v11[4] = (int)a5;
        v11[3] = a1;
        v11[5] = 0LL;
        v11[6] = 0LL;
        WdLogEvent5_WdEvent(v11);
      }
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdLowResource(v8);
    LODWORD(a1) = -1073741801;
    *(_QWORD *)(v13 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v13);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)a1;
}
