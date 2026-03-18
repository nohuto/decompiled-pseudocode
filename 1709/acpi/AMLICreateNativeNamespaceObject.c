/*
 * XREFs of AMLICreateNativeNamespaceObject @ 0x1C005C51C
 * Callers:
 *     AcpiReflectNativeObject @ 0x1C0054A40 (AcpiReflectNativeObject.c)
 * Callees:
 *     NewObjData @ 0x1C0008108 (NewObjData.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     CreateNativeNameSpaceObject @ 0x1C001211C (CreateNativeNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C001B6A4 (GetNameSpaceObject.c)
 *     CreateNameSpaceObject @ 0x1C001C380 (CreateNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     AMLIGetValidNamespaceName @ 0x1C005D140 (AMLIGetValidNamespaceName.c)
 */

__int64 __fastcall AMLICreateNativeNamespaceObject(
        int a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  struct _EX_RUNDOWN_REF *v6; // rdi
  _BYTE *v7; // rsi
  int valid; // ebx
  int v12; // edx
  __int64 v13; // r14
  _BYTE *v14; // rax
  int NameSpaceObject; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int16 v20; // cx
  __int128 v22; // xmm1
  __int64 v23; // [rsp+28h] [rbp-49h]
  __int64 v24; // [rsp+30h] [rbp-41h]
  __int64 v25; // [rsp+38h] [rbp-39h]
  struct _EX_RUNDOWN_REF *v26; // [rsp+48h] [rbp-29h] BYREF
  __int64 v27; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v28[40]; // [rsp+58h] [rbp-19h] BYREF
  int Src; // [rsp+80h] [rbp+Fh] BYREF
  char v30; // [rsp+84h] [rbp+13h]

  v6 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  if ( ((a1 - 6) & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741637;
  Src = a2;
  v30 = 0;
  valid = AMLIGetValidNamespaceName(&Src, 0LL);
  if ( valid < 0 )
    return (unsigned int)valid;
  v13 = *a3;
  if ( !v13 )
    return (unsigned int)-1073741823;
  memset(v28, v12, sizeof(v28));
  *(_WORD *)&v28[2] = 8;
  *(_DWORD *)&v28[24] = 200;
  if ( a1 == 8 )
  {
    if ( a4 > 7 || a5 > 1 )
      return (unsigned int)-1073741637;
    v14 = (_BYTE *)NewObjData(gpheapGlobal, (__int64)v28);
    v7 = v14;
    if ( !v14 )
      return (unsigned int)-1073741670;
    memset(v14, 0, 0xC8uLL);
  }
  *a6 = 0;
  NameSpaceObject = GetNameSpaceObject(&Src, v13, (__int64)&v27, 0);
  valid = NameSpaceObject;
  if ( NameSpaceObject < 0 )
  {
    if ( NameSpaceObject != -1073741772 )
      goto LABEL_26;
    valid = CreateNameSpaceObject(
              gpheapGlobal,
              (unsigned __int8 *)&Src,
              v13,
              (struct _EX_RUNDOWN_REF *)gpNativeNameSpaceOwner,
              &v26,
              0x20000);
  }
  else
  {
    v17 = 8LL;
    if ( a1 != 8 || (v19 = v27, v16 = 1LL, v20 = *(_WORD *)(v27 + 66), (unsigned __int16)(v20 - 1) > 3u) && v20 != 8 )
    {
      valid = -1073741823;
      goto LABEL_19;
    }
    if ( (*(_WORD *)(v27 + 64) & 0x180) != 0 )
    {
      valid = -1073741823;
      *a6 = 1;
      goto LABEL_19;
    }
    valid = CreateNativeNameSpaceObject(384LL, &Src, v13, v18, v23, v24, v25, (__int64 *)&v26);
    DereferenceObjectEx(v19);
  }
  v6 = v26;
LABEL_26:
  if ( valid >= 0 )
  {
    if ( a1 == 8 )
    {
      v22 = *(_OWORD *)&v28[16];
      *(_OWORD *)&v6[8].Count = *(_OWORD *)v28;
      *(_OWORD *)&v6[10].Count = v22;
      v6[12].Count = (unsigned __int64)v7;
      v7[193] = a4 & 7;
      if ( a5 )
        v7[192] = 1;
    }
    else
    {
      WORD1(v6[8].Ptr) = 6;
    }
    LOWORD(v6[8].Count) |= 0x200u;
    DereferenceObjectEx((__int64)v6);
    return (unsigned int)valid;
  }
LABEL_19:
  if ( v7 )
  {
    *(_QWORD *)&v28[32] = v7;
    FreeObjData((__int64)v28, v16, v17, v18);
  }
  return (unsigned int)valid;
}
