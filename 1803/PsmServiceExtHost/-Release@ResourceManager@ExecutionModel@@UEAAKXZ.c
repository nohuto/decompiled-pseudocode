/*
 * XREFs of ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x18004EF00
 * Callers:
 *     ?Release@ResourceManager@ExecutionModel@@W7EAAKXZ @ 0x180041DD0 (-Release@ResourceManager@ExecutionModel@@W7EAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003E448 (--3@YAXPEAX@Z.c)
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18004E9E0 (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::Release(ExecutionModel::ResourceManager *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( !v2 && this )
  {
    ExecutionModel::ResourceManager::~ResourceManager(this);
    operator delete(this);
  }
  return v2;
}
