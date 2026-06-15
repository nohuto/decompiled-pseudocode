/*
 * XREFs of ?FindSaDeviceByResourceId@CDeviceGraphStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1800CC960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x1800D37BC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 */

__int64 __fastcall CDeviceGraphStore::FindSaDeviceByResourceId(
        CDeviceGraphStore *this,
        __int64 a2,
        struct ISaDeviceProxy **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 i; // rax
  unsigned int v12; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *a3 = 0LL;
  v7 = **((_QWORD **)this + 7);
  while ( v7 != *((_QWORD *)this + 7) )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, struct ISaDeviceProxy **))(**(_QWORD **)(v7 + 64) + 152LL))(
           *(_QWORD *)(v7 + 64),
           a2,
           a3) >= 0 )
    {
      v12 = 0;
      goto LABEL_14;
    }
    if ( !*(_BYTE *)(v7 + 25) )
    {
      v10 = *(_QWORD *)(v7 + 16);
      if ( *(_BYTE *)(v10 + 25) )
      {
        for ( i = *(_QWORD *)(v7 + 8); !*(_BYTE *)(i + 25) && v7 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
          v7 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v10, v8, v9);
      }
      v7 = i;
    }
  }
  v12 = -2005139430;
LABEL_14:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v12;
}
