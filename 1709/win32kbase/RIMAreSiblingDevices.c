/*
 * XREFs of RIMAreSiblingDevices @ 0x1C0101090
 * Callers:
 *     NtRIMAreSiblingDevices @ 0x1C00FFCD0 (NtRIMAreSiblingDevices.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RIMAreSiblingDevices(char *a1, char *a2, _DWORD *a3, char a4)
{
  unsigned int v7; // esi
  int v8; // r15d
  int v9; // eax
  int v10; // r12d
  BOOL v11; // r14d
  PVOID v12; // rdi
  const void *v13; // rcx
  const void *v14; // rdx
  unsigned int v15; // eax
  int v16; // r9d
  __int64 v18; // [rsp+30h] [rbp-48h]
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  PVOID v20; // [rsp+40h] [rbp-38h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x7Fu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v7 = 0;
  v8 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  LODWORD(v18) = v8;
  v9 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &v20);
  v10 = v9;
  HIDWORD(v18) = v9;
  if ( v8 < 0 || v9 < 0 )
  {
    v7 = v9;
    if ( v8 < 0 )
      v7 = v8;
    v12 = Object;
  }
  else
  {
    v11 = 0;
    v12 = Object;
    v13 = (const void *)*((_QWORD *)Object + 49);
    if ( v13 )
    {
      v14 = (const void *)*((_QWORD *)v20 + 49);
      if ( v14 )
      {
        v15 = *((_DWORD *)Object + 100);
        if ( v15 )
        {
          v16 = *((_DWORD *)v20 + 100);
          if ( v16 )
          {
            if ( v15 == v16 )
              v11 = RtlCompareMemory(v13, v14, v15) == v15;
          }
        }
      }
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = v11;
    }
    else
    {
      *a3 = v11;
    }
  }
  if ( v8 >= 0 )
    ObfDereferenceObject(v12);
  if ( v10 >= 0 )
    ObfDereferenceObject(v20);
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x80u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v7,
    v18);
  return v7;
}
