/*
 * XREFs of AMLICreateNativeNamespaceObject @ 0x1C005BA04
 * Callers:
 *     AcpiReflectNativeObject @ 0x1C0053F00 (AcpiReflectNativeObject.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     FreeObjData @ 0x1C0015D30 (FreeObjData.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     NewObjData @ 0x1C001A9F4 (NewObjData.c)
 *     CreateNativeNameSpaceObject @ 0x1C002307C (CreateNativeNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     AMLIGetValidNamespaceName @ 0x1C005D350 (AMLIGetValidNamespaceName.c)
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
  __int64 v16; // r9
  _QWORD *v17; // rdi
  __int16 v18; // cx
  __int128 v20; // xmm1
  __int64 v21; // [rsp+28h] [rbp-49h]
  __int64 v22; // [rsp+30h] [rbp-41h]
  __int64 v23; // [rsp+38h] [rbp-39h]
  __int64 v24; // [rsp+48h] [rbp-29h] BYREF
  __int64 v25; // [rsp+50h] [rbp-21h]
  _BYTE v26[40]; // [rsp+58h] [rbp-19h] BYREF
  int Src; // [rsp+80h] [rbp+Fh] BYREF
  char v28; // [rsp+84h] [rbp+13h]

  v6 = 0LL;
  v7 = 0LL;
  v24 = 0LL;
  if ( ((a1 - 6) & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741637;
  Src = a2;
  v28 = 0;
  valid = AMLIGetValidNamespaceName(&Src, 0LL);
  if ( valid < 0 )
    return (unsigned int)valid;
  v13 = *a3;
  if ( !v13 )
    return (unsigned int)-1073741823;
  memset(v26, v12, sizeof(v26));
  *(_WORD *)&v26[2] = 8;
  *(_DWORD *)&v26[24] = 200;
  if ( a1 == 8 )
  {
    if ( a4 > 7 || a5 > 1 )
      return (unsigned int)-1073741637;
    v14 = (_BYTE *)NewObjData(gpheapGlobal, (__int64)v26);
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
    valid = CreateNameSpaceObject(
              gpheapGlobal,
              (unsigned __int8 *)&Src,
              v13,
              (struct _EX_RUNDOWN_REF *)gpNativeNameSpaceOwner,
              &v24,
              0x20000);
  }
  else
  {
    if ( a1 != 8 || (v17 = (_QWORD *)v25, v18 = *(_WORD *)(v25 + 66), (unsigned __int16)(v18 - 1) > 3u) && v18 != 8 )
    {
      valid = -1073741823;
      goto LABEL_19;
    }
    if ( (*(_WORD *)(v25 + 64) & 0x180) != 0 )
    {
      valid = -1073741823;
      *a6 = 1;
      goto LABEL_19;
    }
    valid = CreateNativeNameSpaceObject(384LL, &Src, v13, v16, v21, v22, v23, &v24);
    DereferenceObjectEx(v17);
  }
  v6 = v24;
LABEL_26:
  if ( valid >= 0 )
  {
    if ( a1 == 8 )
    {
      v20 = *(_OWORD *)&v26[16];
      *(_OWORD *)(v6 + 64) = *(_OWORD *)v26;
      *(_OWORD *)(v6 + 80) = v20;
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
    DereferenceObjectEx((_QWORD *)v6);
    return (unsigned int)valid;
  }
LABEL_19:
  if ( v7 )
  {
    *(_QWORD *)&v26[32] = v7;
    FreeObjData((__int64)v26);
  }
  return (unsigned int)valid;
}
