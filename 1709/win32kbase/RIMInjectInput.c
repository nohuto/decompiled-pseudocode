/*
 * XREFs of RIMInjectInput @ 0x1C0102A40
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall RIMInjectInput(char *a1, char *a2, char a3, char *a4, unsigned int Size)
{
  int v8; // r14d
  _BYTE *v9; // rdi
  PVOID v10; // r15
  char *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  char *v14; // rcx
  PVOID v16; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object[3]; // [rsp+38h] [rbp-40h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x5Eu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v16);
  if ( v8 >= 0 )
  {
    v9 = v16;
    RIMLockExclusive((__int64)v16 + 96);
    if ( v9[73] || v9[75] )
    {
      v8 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x61u,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
      goto LABEL_21;
    }
    v8 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, Object);
    if ( v8 < 0 )
    {
LABEL_21:
      *((_QWORD *)v9 + 13) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 96, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v9);
      goto LABEL_22;
    }
    v10 = Object[0];
    v11 = (char *)Object[0] + 64;
    if ( !Object[0] )
      v11 = 0LL;
    Object[1] = v11;
    if ( (*((_DWORD *)v11 + 46) & 0x1000) == 0 )
    {
      v8 = -1073741811;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x60u,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
      goto LABEL_19;
    }
    RIMLockExclusive((__int64)(v9 + 696));
    *((_DWORD *)v11 + 64) = 0;
    v12 = *((_QWORD *)v11 + 57);
    v13 = *(unsigned __int16 *)(v12 + 44);
    if ( Size < (unsigned int)v13 )
      v13 = Size;
    *((_QWORD *)v11 + 33) = (unsigned int)v13;
    if ( a3 )
    {
      v14 = *(char **)(v12 + 24);
      if ( &a4[v13] < a4 || (unsigned __int64)&a4[v13] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    else
    {
      v14 = *(char **)(v12 + 24);
      if ( a4 == v14 )
      {
LABEL_17:
        rimProcessDeviceBufferAndStartRead((__int64)v9, (__int64)v11);
        *((_QWORD *)v9 + 88) = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 696, 0LL);
        KeLeaveCriticalRegion();
LABEL_19:
        ObfDereferenceObject(v10);
        goto LABEL_21;
      }
    }
    memmove(v14, a4, (unsigned int)v13);
    goto LABEL_17;
  }
LABEL_22:
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x62u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v8);
  return (unsigned int)v8;
}
