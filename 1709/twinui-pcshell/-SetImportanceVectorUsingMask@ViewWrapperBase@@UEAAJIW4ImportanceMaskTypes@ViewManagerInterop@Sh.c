/*
 * XREFs of ?SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180140EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1801419D0 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 */

__int64 __fastcall ViewWrapperBase::SetImportanceVectorUsingMask(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int16 v6; // dx
  char v7; // cl
  char v8; // cl
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+20h] BYREF
  int v11; // [rsp+48h] [rbp+28h]
  int v12; // [rsp+50h] [rbp+30h]

  v11 = a2;
  v4 = a3;
  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 152), &SRWLock);
  v12 = a2;
  if ( v4 == -1 )
  {
    v6 = v12;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 324);
    v12 = *(_DWORD *)(a1 + 324);
    if ( (v4 & 1) != 0 )
      v6 ^= (v6 ^ a2) & 1;
    if ( (v4 & 2) != 0 )
      v6 ^= ((unsigned __int8)v6 ^ (unsigned __int8)a2) & 0xE;
    if ( (v4 & 4) != 0 )
      v6 ^= ((unsigned __int8)v6 ^ (unsigned __int8)a2) & 0x30;
    if ( (v4 & 8) != 0 )
      v6 ^= ((unsigned __int8)v6 ^ (unsigned __int8)a2) & 0x40;
    if ( (v4 & 0x10) != 0 )
      v6 ^= (v6 ^ a2) & 0x80;
    if ( (v4 & 0x20) != 0 )
      v6 ^= (v6 ^ a2) & 0x100;
    if ( (v4 & 0x40) != 0 )
      v6 ^= (v6 ^ a2) & 0x200;
    if ( (v4 & 0x80) != 0 )
      v6 ^= (v6 ^ a2) & 0x400;
    if ( (v4 & 0x100) != 0 )
      v6 ^= (v6 ^ a2) & 0x800;
    v7 = BYTE2(v12);
    if ( (v4 & 0x200) != 0 )
      v7 = BYTE2(v11);
    BYTE2(v12) = v7;
    v8 = HIBYTE(v12);
    if ( (v4 & 0x400) != 0 )
      v8 = HIBYTE(v11);
    HIBYTE(v12) = v8;
  }
  if ( (~(*(_DWORD *)(a1 + 432) >> 2) & 1) != 0 )
    v6 ^= ((unsigned __int8)v6 ^ (unsigned __int8)*(_WORD *)(a1 + 324)) & 0xF;
  if ( (~(*(_DWORD *)(a1 + 432) >> 3) & 1) != 0 )
    v6 ^= ((unsigned __int8)v6 ^ (unsigned __int8)*(_WORD *)(a1 + 324)) & 0x31;
  LOWORD(v12) = (v6 ^ *(_WORD *)(a1 + 324)) & 0xC0 ^ v6;
  if ( v12 != *(_DWORD *)(a1 + 324) )
  {
    *(_DWORD *)(a1 + 324) = v12;
    ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 24));
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
