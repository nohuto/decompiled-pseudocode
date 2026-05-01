/*
 * XREFs of ?RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180027584
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x1800273D0 (RmCoreRpcSrvAcquireResourceSet.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::RmpResourceSetPropertiesToResourceSetInfo(
        ExecutionModel *this,
        struct _RM_RESOURCE_SET_PROPERTIES *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  __int64 v3; // rax
  bool v4; // zf
  int v5; // eax
  _DWORD *v6; // r8
  __int64 v7; // r9

  v3 = *((unsigned int *)this + 20);
  *((_DWORD *)a2 + 20) = 0;
  *((_QWORD *)a2 + 11) = v3;
  *((_QWORD *)a2 + 17) = *(_QWORD *)this;
  *((_DWORD *)a2 + 32) = 2;
  *((_QWORD *)a2 + 14) = *((_QWORD *)this + 1);
  *((_DWORD *)a2 + 26) = 1;
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 9);
  *((_QWORD *)a2 + 3) = *((_QWORD *)this + 8);
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 7);
  *((_QWORD *)a2 + 45) = *((_QWORD *)this + 6);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 21);
  v4 = (*((_BYTE *)a2 + 16) & 1) == 0;
  *((_DWORD *)a2 + 12) = (*((_DWORD *)this + 21) >> 2) & 1;
  if ( !v4 )
    *((_DWORD *)a2 + 4) = *((_DWORD *)this + 8);
  v5 = *((unsigned __int8 *)this + 35);
  v6 = (_DWORD *)((char *)a2 + 96);
  *((_DWORD *)a2 + 2) = v5;
  v7 = 3LL;
  *((_DWORD *)a2 + 8) = v5;
  do
  {
    *v6 = v5;
    v6 += 6;
    --v7;
  }
  while ( v7 );
  *((_DWORD *)a2 + 8) = *((unsigned __int8 *)this + 36);
  *((_BYTE *)a2 + 42) = *((_BYTE *)this + 90);
  *((_WORD *)a2 + 20) = *((_WORD *)this + 44);
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  memset_0((char *)a2 + 164, 0, 0xBCuLL);
}
