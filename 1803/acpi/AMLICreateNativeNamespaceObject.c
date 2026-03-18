/*
 * XREFs of AMLICreateNativeNamespaceObject @ 0x1C0044F0C
 * Callers:
 *     AcpiReflectNativeObject @ 0x1C0033BB0 (AcpiReflectNativeObject.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     CreateNativeNameSpaceObject @ 0x1C0045240 (CreateNativeNameSpaceObject.c)
 *     AMLIGetValidNamespaceName @ 0x1C0046064 (AMLIGetValidNamespaceName.c)
 *     FreeObjData @ 0x1C0046808 (FreeObjData.c)
 *     NewObjData @ 0x1C0047164 (NewObjData.c)
 *     CreateNameSpaceObject @ 0x1C0049AB8 (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x1C004A1E0 (GetNameSpaceObject.c)
 */

__int64 __fastcall AMLICreateNativeNamespaceObject(
        int a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 v6; // rdi
  _BYTE *v7; // rsi
  int valid; // ebx
  int v12; // edx
  __int64 v13; // r14
  _BYTE *v14; // rax
  int NameSpaceObject; // eax
  __int16 v16; // cx
  __int128 v18; // xmm1
  __int64 v19; // [rsp+48h] [rbp-29h] BYREF
  __int64 v20; // [rsp+50h] [rbp-21h]
  _BYTE v21[40]; // [rsp+58h] [rbp-19h] BYREF
  int Src; // [rsp+80h] [rbp+Fh] BYREF
  char v23; // [rsp+84h] [rbp+13h]

  v6 = 0LL;
  v7 = 0LL;
  v19 = 0LL;
  if ( ((a1 - 6) & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741637;
  Src = a2;
  v23 = 0;
  valid = AMLIGetValidNamespaceName(&Src, 0LL);
  if ( valid < 0 )
    return (unsigned int)valid;
  v13 = *a3;
  if ( !v13 )
    return (unsigned int)-1073741823;
  memset(v21, v12, sizeof(v21));
  *(_WORD *)&v21[2] = 8;
  *(_DWORD *)&v21[24] = 200;
  if ( a1 == 8 )
  {
    if ( a4 > 7 || a5 > 1 )
      return (unsigned int)-1073741637;
    v14 = (_BYTE *)NewObjData(gpheapGlobal, v21);
    v7 = v14;
    if ( !v14 )
      return (unsigned int)-1073741670;
    memset(v14, 0, 0xC8uLL);
  }
  *a6 = 0;
  NameSpaceObject = GetNameSpaceObject(&Src);
  valid = NameSpaceObject;
  if ( NameSpaceObject < 0 )
  {
    if ( NameSpaceObject != -1073741772 )
      goto LABEL_26;
    valid = CreateNameSpaceObject(gpheapGlobal, &Src, v13, gpNativeNameSpaceOwner, &v19, 0x20000);
  }
  else
  {
    if ( a1 != 8 || (v16 = *(_WORD *)(v20 + 66), (unsigned __int16)(v16 - 1) > 3u) && v16 != 8 )
    {
      valid = -1073741823;
      goto LABEL_19;
    }
    if ( (*(_WORD *)(v20 + 64) & 0x180) != 0 )
    {
      valid = -1073741823;
      *a6 = 1;
      goto LABEL_19;
    }
    valid = CreateNativeNameSpaceObject(384LL, &Src, v13);
    DereferenceObjectEx(v20);
  }
  v6 = v19;
LABEL_26:
  if ( valid >= 0 )
  {
    if ( a1 == 8 )
    {
      v18 = *(_OWORD *)&v21[16];
      *(_OWORD *)(v6 + 64) = *(_OWORD *)v21;
      *(_OWORD *)(v6 + 80) = v18;
      *(_QWORD *)(v6 + 96) = v7;
      v7[193] = a4 & 7;
      if ( a5 )
        v7[192] = 1;
    }
    else
    {
      *(_WORD *)(v6 + 66) = 6;
    }
    *(_WORD *)(v6 + 64) |= 0x200u;
    DereferenceObjectEx(v6);
    return (unsigned int)valid;
  }
LABEL_19:
  if ( v7 )
  {
    *(_QWORD *)&v21[32] = v7;
    FreeObjData(v21);
  }
  return (unsigned int)valid;
}
