/*
 * XREFs of NtTokenManagerCreateCompositionTokenHandle @ 0x1C0024ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C00251A0 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0026BC0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall NtTokenManagerCreateCompositionTokenHandle(
        char *Src,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 *a5)
{
  unsigned __int128 v5; // rax
  __int64 *v6; // r15
  unsigned __int64 v7; // r13
  int v9; // ebx
  void *v10; // rdi
  __int64 v11; // r14
  size_t v12; // rsi
  int v13; // esi
  __int64 v14; // r9
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h]
  __int64 v18; // [rsp+70h] [rbp-98h]
  void *v19; // [rsp+78h] [rbp-90h] BYREF
  int v20; // [rsp+80h] [rbp-88h]
  int v21; // [rsp+84h] [rbp-84h]
  __int64 v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-78h] BYREF
  __int64 v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  __int64 v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+110h] [rbp+8h] BYREF
  int v31; // [rsp+118h] [rbp+10h]
  int v32; // [rsp+120h] [rbp+18h]

  *((_QWORD *)&v5 + 1) = a2;
  v32 = a3;
  v31 = DWORD2(v5);
  v6 = a5;
  v7 = DWORD2(v5);
  v9 = 0;
  Handle = (HANDLE)-1LL;
  v10 = 0LL;
  v11 = 0LL;
  v30 = 0LL;
  if ( !Src || !DWORD2(v5) || !(_DWORD)a3 || !a5 )
    v9 = -1073741811;
  if ( v9 >= 0 )
  {
    v5 = DWORD2(v5) * (unsigned __int128)0x18uLL;
    v29 = (v7 * (unsigned __int128)0x18uLL) >> 64;
    v12 = 24 * v7;
    if ( is_mul_ok(v7, 0x18uLL) )
    {
      v17 = v5;
      v9 = 0;
    }
    else
    {
      v12 = -1LL;
      v17 = -1LL;
      v9 = -1073741675;
    }
    if ( v9 < 0 )
      goto LABEL_37;
    v10 = (void *)Win32AllocPool(v12, 1650675028LL);
    if ( !v10 )
      v9 = -1073741801;
    if ( v9 < 0 )
    {
LABEL_37:
      v13 = v32;
    }
    else
    {
      if ( &Src[v12] < Src || (unsigned __int64)&Src[v12] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v10, Src, v12);
      if ( v6 + 1 < v6 || (unsigned __int64)(v6 + 1) > MmUserProbeAddress )
        v6 = (__int64 *)MmUserProbeAddress;
      v18 = *v6;
      v9 = 0;
      v13 = v32;
    }
    if ( v9 >= 0 )
    {
      v9 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000LL, &v30);
      v11 = v30;
      if ( v9 >= 0 )
      {
        v23 = 48;
        v24 = 0LL;
        v26 = 0;
        v25 = 0LL;
        v27 = v30;
        v28 = 0LL;
        KeEnterCriticalRegion();
        v19 = v10;
        v20 = v7;
        v21 = v13;
        v22 = v18;
        LOBYTE(v14) = 1;
        v9 = CompositionObject::Create(0LL, &v23, 3LL, v14, 4, 128, CompositionTokenObject::ObjectInit, &v19, &Handle);
        KeLeaveCriticalRegion();
        if ( v9 >= 0 )
        {
          *((_QWORD *)&v5 + 1) = a4;
          if ( a4 )
          {
            if ( a4 + 8 < a4 || a4 + 8 > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            **((_QWORD **)&v5 + 1) = Handle;
          }
          else
          {
            v9 = -1073741811;
          }
        }
      }
    }
  }
  if ( v11 )
    Win32FreePool(v11, *((_QWORD *)&v5 + 1), a3);
  if ( v9 < 0 && Handle != (HANDLE)-1LL )
    NtClose(Handle);
  if ( v10 )
    Win32FreePool(v10, *((_QWORD *)&v5 + 1), a3);
  return (unsigned int)v9;
}
