/*
 * XREFs of ?RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x18001AF60
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x18001ADA0 (RmCoreRpcSrvAcquireResourceSet.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::RmpResourceSetPropertiesToResourceSetInfo(
        ExecutionModel *this,
        struct _RM_RESOURCE_SET_PROPERTIES *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  int v3; // eax

  *((_QWORD *)a2 + 12) = *((unsigned int *)this + 20);
  *((_DWORD *)a2 + 22) = 0;
  *((_QWORD *)a2 + 18) = *(_QWORD *)this;
  *((_DWORD *)a2 + 34) = 2;
  *((_QWORD *)a2 + 15) = *((_QWORD *)this + 1);
  *((_DWORD *)a2 + 28) = 1;
  *((_QWORD *)a2 + 9) = *((_QWORD *)this + 9);
  *((_QWORD *)a2 + 3) = *((_QWORD *)this + 8);
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 7);
  *((_QWORD *)a2 + 46) = *((_QWORD *)this + 6);
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 11);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 24);
  *((_DWORD *)a2 + 12) = (*((_DWORD *)this + 24) >> 2) & 1;
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 8);
  v3 = *((unsigned __int8 *)this + 35);
  *((_DWORD *)a2 + 8) = v3;
  *((_DWORD *)a2 + 2) = v3;
  *((_DWORD *)a2 + 26) = v3;
  *((_DWORD *)a2 + 32) = v3;
  *((_DWORD *)a2 + 38) = v3;
  *((_DWORD *)a2 + 8) = *((unsigned __int8 *)this + 36);
  *((_BYTE *)a2 + 42) = *((_BYTE *)this + 106);
  *((_WORD *)a2 + 20) = *((_WORD *)this + 52);
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  memset_0((char *)a2 + 172, 0, 0xBCuLL);
}
