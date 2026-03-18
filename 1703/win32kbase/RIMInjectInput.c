/*
 * XREFs of RIMInjectInput @ 0x1C0102260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall RIMInjectInput(char *a1, char *a2, char a3, const void *a4, unsigned int Size)
{
  char *v6; // rsi
  int v8; // r14d
  _BYTE *v9; // rdi
  int v10; // edx
  int v11; // edx
  PVOID v12; // r15
  char *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  size_t v16; // r8
  void *v17; // rcx
  unsigned __int64 v18; // rax
  PVOID v20; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object[3]; // [rsp+38h] [rbp-40h] BYREF

  v6 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    94,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v20);
  if ( v8 >= 0 )
  {
    v9 = v20;
    RIMLockExclusive((__int64)v20 + 96);
    if ( v9[73] || v9[75] )
    {
      v8 = -1073741637;
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        18,
        97,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
      goto LABEL_21;
    }
    v8 = RawInputManagerDeviceObjectResolveHandle(v6, 3u, 1, Object);
    if ( v8 < 0 )
    {
LABEL_21:
      *((_QWORD *)v9 + 13) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 96, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v9);
      goto LABEL_22;
    }
    v12 = Object[0];
    v13 = (char *)Object[0] + 64;
    if ( !Object[0] )
      v13 = 0LL;
    Object[1] = v13;
    if ( (*((_DWORD *)v13 + 46) & 0x1000) == 0 )
    {
      v8 = -1073741811;
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        18,
        96,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
      goto LABEL_19;
    }
    RIMLockExclusive((__int64)(v9 + 696));
    *((_DWORD *)v13 + 64) = 0;
    v14 = *((_QWORD *)v13 + 57);
    v15 = *(unsigned __int16 *)(v14 + 44);
    if ( Size < (unsigned int)v15 )
      v15 = Size;
    v16 = (unsigned int)v15;
    *((_QWORD *)v13 + 33) = (unsigned int)v15;
    if ( a3 )
    {
      v17 = *(void **)(v14 + 24);
      v18 = (unsigned __int64)a4 + v15;
      if ( v18 < (unsigned __int64)a4 || v18 > (unsigned __int64)W32UserProbeAddress )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
    else
    {
      v17 = *(void **)(v14 + 24);
      if ( a4 == v17 )
      {
LABEL_17:
        rimProcessDeviceBufferAndStartRead((__int64)v9, (__int64)v13);
        *((_QWORD *)v9 + 88) = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 696, 0LL);
        KeLeaveCriticalRegion();
LABEL_19:
        ObfDereferenceObject(v12);
        goto LABEL_21;
      }
    }
    memmove(v17, a4, v16);
    goto LABEL_17;
  }
LABEL_22:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x62u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v8);
  return (unsigned int)v8;
}
