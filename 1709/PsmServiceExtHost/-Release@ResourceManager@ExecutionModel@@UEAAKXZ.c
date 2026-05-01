/*
 * XREFs of ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x1800321A0
 * Callers:
 *     ?Release@ResourceManager@ExecutionModel@@W7EAAKXZ @ 0x180026B00 (-Release@ResourceManager@ExecutionModel@@W7EAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025A84 (--3@YAXPEAX@Z.c)
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180031878 (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::Release(ExecutionModel::ResourceManager *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 21);
  if ( !v2 && this )
  {
    ExecutionModel::ResourceManager::~ResourceManager(this);
    operator delete(this);
  }
  return v2;
}
