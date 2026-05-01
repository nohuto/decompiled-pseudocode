/*
 * XREFs of ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18003A978
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x18003A08C (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002145C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

ExecutionModel::ResourceManager *__fastcall ExecutionModel::ResourceManager::ResourceManager(
        ExecutionModel::ResourceManager *this)
{
  ExecutionModel::ResourceManager *result; // rax

  *(_QWORD *)this = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IExternalResourceRegister'};
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = &ExecutionModel::ResourceManager::`vftable'{for `IModernResourceEnforcerCallback'};
  *((_DWORD *)this + 8) = 1;
  `vector constructor iterator'(
    (char *)this + 40,
    8LL,
    2LL,
    (ExecutionModel::_ResourceInfo *(__fastcall *)(ExecutionModel::_ResourceInfo *))ATL::CComPtr<ExecutionModel::BaseResourceSet>::CComPtr<ExecutionModel::BaseResourceSet>);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 10000;
  *((_DWORD *)this + 27) = 1000;
  *((_QWORD *)this + 14) = (char *)this + 112;
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_WORD *)this + 72) = 2048;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = (char *)this + 192;
  *((_QWORD *)this + 25) = (char *)this + 192;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_WORD *)this + 112) = 2048;
  result = this;
  *((_DWORD *)this + 46) = 0;
  return result;
}
