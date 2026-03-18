/*
 * XREFs of DxgkNetDispStartMiracastDisplayDevice @ 0x1C017CC40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C0024F18 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004025C (DxgkMiracastStartMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStartMiracastDisplayDevice(_OWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct _KEVENT *v4; // rdi
  HANDLE *v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  HANDLE v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  PVOID Object[2]; // [rsp+30h] [rbp-258h] BYREF
  HANDLE v22[70]; // [rsp+40h] [rbp-248h] BYREF

  memset(v22, 0, 0x228uLL);
  v4 = 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v5 = v22;
  v6 = 4LL;
  do
  {
    *(_OWORD *)v5 = *a1;
    *((_OWORD *)v5 + 1) = a1[1];
    *((_OWORD *)v5 + 2) = a1[2];
    *((_OWORD *)v5 + 3) = a1[3];
    *((_OWORD *)v5 + 4) = a1[4];
    *((_OWORD *)v5 + 5) = a1[5];
    *((_OWORD *)v5 + 6) = a1[6];
    v5 += 16;
    *((_OWORD *)v5 - 1) = a1[7];
    a1 += 8;
    --v6;
  }
  while ( v6 );
  *(_OWORD *)v5 = *a1;
  *((_OWORD *)v5 + 1) = a1[1];
  v5[4] = (HANDLE)*((_QWORD *)a1 + 4);
  if ( LODWORD(v22[0]) != 552 )
  {
    v7 = -2147483640;
    v8 = WdLogNewEntry5_WdWarning(v5, 128LL, v2, v3);
    *(_QWORD *)(v8 + 24) = -2147483640LL;
LABEL_7:
    WdLogEvent5_WdWarning(v8);
    return v7;
  }
  Current = DXGPROCESS::GetCurrent((__int64)v5);
  LODWORD(Object[0]) = DxgkNetDispAccessCheck(Current);
  if ( SLODWORD(Object[0]) < 0 )
  {
    v14 = -2147483643LL;
LABEL_10:
    v7 = v14;
    v8 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v8 + 24) = v14;
    goto LABEL_7;
  }
  v15 = v22[67];
  if ( !v22[67] )
    v15 = v22[68];
  if ( !v15 )
  {
    LODWORD(Object[0]) = ExUuidCreate((UUID *)&v22[67]);
    if ( SLODWORD(Object[0]) < 0 )
    {
      v14 = -2147483647LL;
      goto LABEL_10;
    }
  }
  if ( v22[66]
    && (v16 = ObReferenceObjectByHandle(v22[66], 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL),
        v4 = (struct _KEVENT *)Object[0],
        LODWORD(Object[0]) = v16,
        v16 < 0) )
  {
    v7 = -2147483640;
    v19 = WdLogNewEntry5_WdError(v18, v17);
    *(HANDLE *)(v19 + 24) = v22[66];
    WdLogEvent5_WdError(v19);
  }
  else
  {
    return (unsigned int)DxgkMiracastStartMiracastSession((__int64)v22, v4, Object);
  }
  return v7;
}
