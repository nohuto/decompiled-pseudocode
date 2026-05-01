/*
 * XREFs of ??_GCPrivilegedTabletModeOperations@@UEAAPEAXI@Z @ 0x1800F6A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$PrivilegedOperationsBase@UIPrivilegedForegroundOperations@@@@UEAA@XZ @ 0x1800F6A34 (--1-$PrivilegedOperationsBase@UIPrivilegedForegroundOperations@@@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CPrivilegedTabletModeOperations *__fastcall CPrivilegedTabletModeOperations::`scalar deleting destructor'(
        CPrivilegedTabletModeOperations *this,
        char a2)
{
  PrivilegedOperationsBase<IPrivilegedForegroundOperations>::~PrivilegedOperationsBase<IPrivilegedForegroundOperations>();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
