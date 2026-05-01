/*
 * XREFs of ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180012124
 * Callers:
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PEAXPEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180013B60 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PE.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800100E0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x180010490 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::ResourceSet *__fastcall ExecutionModel::ResourceSet::ResourceSet(ExecutionModel::ResourceSet *this)
{
  __int64 v2; // r9

  ExecutionModel::BaseResourceSet::BaseResourceSet(this);
  *((_DWORD *)this + 362) = 2;
  *(_QWORD *)this = &ExecutionModel::ResourceSet::`vftable';
  *((_QWORD *)this + 179) = 0LL;
  *((_QWORD *)this + 180) = 0LL;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::ResourceSet *)((char *)this + 1456));
  *((_QWORD *)this + 230) = v2;
  *((_QWORD *)this + 231) = v2;
  *((_QWORD *)this + 235) = v2;
  *((_QWORD *)this + 237) = -1LL;
  *((_DWORD *)this + 472) = v2;
  *((_QWORD *)this + 238) = v2;
  *((_QWORD *)this + 239) = v2;
  *((_QWORD *)this + 232) = 0LL;
  *((_QWORD *)this + 233) = 0LL;
  *((_QWORD *)this + 234) = 0LL;
  *((_DWORD *)this + 363) = 4;
  *((_QWORD *)this + 177) = 0LL;
  *((_QWORD *)this + 178) = 0LL;
  return this;
}
