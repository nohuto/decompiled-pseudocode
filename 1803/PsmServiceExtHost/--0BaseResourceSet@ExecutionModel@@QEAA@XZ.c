/*
 * XREFs of ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18001E970
 * Callers:
 *     ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x1800033A4 (--0ExternalResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180020794 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003A3F8 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003A858 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

ExecutionModel::BaseResourceSet *__fastcall ExecutionModel::BaseResourceSet::BaseResourceSet(
        ExecutionModel::BaseResourceSet *this)
{
  char *v2; // rax
  __int64 v3; // rcx

  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = (char *)this + 48;
  *((_QWORD *)this + 5) = (char *)this + 48;
  *((_WORD *)this + 24) = 0;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *((_DWORD *)this + 38) = -1;
  *((_DWORD *)this + 39) = 1;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 22) = 0LL;
  v2 = (char *)this + 192;
  *((_QWORD *)this + 23) = 0LL;
  v3 = 50LL;
  do
  {
    *(_DWORD *)v2 = -1;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_DWORD *)v2 + 4) = 101;
    *((_WORD *)v2 + 10) = 0;
    v2 += 24;
    --v3;
  }
  while ( v3 );
  *((_QWORD *)this + 174) = 0LL;
  *((_QWORD *)this + 175) = 0LL;
  *((_DWORD *)this + 352) = -1;
  memset_0((char *)this + 64, 0, 0x44uLL);
  return this;
}
