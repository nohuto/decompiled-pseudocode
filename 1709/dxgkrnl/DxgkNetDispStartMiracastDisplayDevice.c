/*
 * XREFs of DxgkNetDispStartMiracastDisplayDevice @ 0x1C0180610
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C00234D4 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0030D64 (DxgkMiracastStartMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStartMiracastDisplayDevice(_OWORD *a1)
{
  __int64 v2; // r8
  struct _KEVENT *v3; // rdi
  HANDLE *v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  HANDLE v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  PVOID Object[2]; // [rsp+30h] [rbp-258h] BYREF
  HANDLE v19[70]; // [rsp+40h] [rbp-248h] BYREF

  memset(v19, 0, 0x228uLL);
  v3 = 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v4 = v19;
  v5 = 4LL;
  do
  {
    *(_OWORD *)v4 = *a1;
    *((_OWORD *)v4 + 1) = a1[1];
    *((_OWORD *)v4 + 2) = a1[2];
    *((_OWORD *)v4 + 3) = a1[3];
    *((_OWORD *)v4 + 4) = a1[4];
    *((_OWORD *)v4 + 5) = a1[5];
    *((_OWORD *)v4 + 6) = a1[6];
    v4 += 16;
    *((_OWORD *)v4 - 1) = a1[7];
    a1 += 8;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)v4 = *a1;
  *((_OWORD *)v4 + 1) = a1[1];
  v4[4] = (HANDLE)*((_QWORD *)a1 + 4);
  if ( LODWORD(v19[0]) != 552 )
  {
    v6 = -2147483640;
    v7 = WdLogNewEntry5_WdWarning(v4, 128LL, v2);
    *(_QWORD *)(v7 + 24) = -2147483640LL;
LABEL_7:
    WdLogEvent5_WdWarning(v7);
    return v6;
  }
  Current = DXGPROCESS::GetCurrent((__int64)v4, 128LL);
  LODWORD(Object[0]) = DxgkNetDispAccessCheck(Current);
  if ( SLODWORD(Object[0]) < 0 )
  {
    v12 = -2147483643LL;
LABEL_10:
    v6 = v12;
    v7 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v7 + 24) = v12;
    goto LABEL_7;
  }
  v13 = v19[67];
  if ( !v19[67] )
    v13 = v19[68];
  if ( !v13 )
  {
    LODWORD(Object[0]) = ExUuidCreate((UUID *)&v19[67]);
    if ( SLODWORD(Object[0]) < 0 )
    {
      v12 = -2147483647LL;
      goto LABEL_10;
    }
  }
  if ( v19[66]
    && (v14 = ObReferenceObjectByHandle(v19[66], 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL),
        v3 = (struct _KEVENT *)Object[0],
        LODWORD(Object[0]) = v14,
        v14 < 0) )
  {
    v6 = -2147483640;
    v16 = WdLogNewEntry5_WdError(v15);
    *(HANDLE *)(v16 + 24) = v19[66];
    WdLogEvent5_WdError(v16);
  }
  else
  {
    return (unsigned int)DxgkMiracastStartMiracastSession((__int64)v19, v3, Object);
  }
  return v6;
}
