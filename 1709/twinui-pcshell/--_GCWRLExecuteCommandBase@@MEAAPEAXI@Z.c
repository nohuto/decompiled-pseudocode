/*
 * XREFs of ??_GCWRLExecuteCommandBase@@MEAAPEAXI@Z @ 0x18017BC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x18017BBA0 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

CWRLExecuteCommandBase *__fastcall CWRLExecuteCommandBase::`scalar deleting destructor'(
        CWRLExecuteCommandBase *this,
        char a2)
{
  CWRLExecuteCommandBase::~CWRLExecuteCommandBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
