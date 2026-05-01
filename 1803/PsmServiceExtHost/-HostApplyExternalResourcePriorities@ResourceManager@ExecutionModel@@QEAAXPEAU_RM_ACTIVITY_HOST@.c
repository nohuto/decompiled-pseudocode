/*
 * XREFs of ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001D5F8
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000AC4C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001D710 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000230C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     CempLockTrackerMarkReleased @ 0x180014260 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003319C (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x18005C5BC (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
        unsigned __int64 this,
        struct _RM_ACTIVITY_HOST *a2)
{
  _QWORD *v3; // r12
  unsigned __int64 v4; // r15
  _QWORD *i; // rbx
  struct _RM_ACTIVITY_HOST **v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  struct _RM_ACTIVITY_HOST **v11; // rax
  __int64 v12; // rax

  v3 = (_QWORD *)(*(_QWORD *)(this + 40) + 160LL);
  v4 = this;
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v6 = (struct _RM_ACTIVITY_HOST **)i[2];
    if ( a2 == v6[182] )
    {
      if ( (*((_BYTE *)a2 + 804) & 1) != 0 )
      {
        HampHostAcquireLockSharedEx((struct _RM_ACTIVITY_HOST *)((char *)a2 + 64), 0);
        v9 = (*((_QWORD *)a2 + 87) & 0x800000000LL) == 0 && (*((char *)a2 + 1156) < 0 || *((_DWORD *)a2 + 156) != 2);
        CempLockTrackerMarkReleased(v8, v7, 1u);
        RtlReleaseSRWLockShared((char *)a2 + 64);
      }
      else
      {
        v9 = (*((unsigned __int16 *)a2 + 529) >> 2) & 1;
      }
      if ( v9 && (*((unsigned __int8 (__fastcall **)(struct _RM_ACTIVITY_HOST **))*v6 + 7))(v6) )
      {
        LODWORD(this) = 3;
        while ( 1 )
        {
          v12 = (unsigned int)this + 8LL;
          if ( LODWORD(v6[3 * v12]) == (_DWORD)this && !BYTE5(v6[3 * v12 + 2]) )
            break;
          this = (unsigned int)(this + 1);
          if ( (unsigned int)this > 0x31 )
          {
            if ( *((_DWORD *)v6 + 350) == 1 )
              goto LABEL_7;
            break;
          }
        }
        (*((void (__fastcall **)(struct _RM_ACTIVITY_HOST **))*v6 + 8))(v6);
      }
      else
      {
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          (struct ExecutionModel::ResourceManager *)this,
          2u,
          0x32u,
          (struct ExecutionModel::_ResourceInfo *)(v6 + 24),
          a2);
        v10 = 3LL;
        v11 = v6 + 35;
        while ( 1 )
        {
          if ( *((_BYTE *)v11 + 5) && *(_DWORD *)v11 == 101 )
          {
            this = *((unsigned int *)v6 + 350);
            if ( (_DWORD)this == 2 && *(v11 - 1) )
            {
              ExecutionModel::ExternalResourceSet::Revoke((ExecutionModel::ExternalResourceSet *)v6, 0);
              goto LABEL_7;
            }
            if ( (_DWORD)this == 1 )
              break;
          }
          ++v10;
          v11 += 3;
          if ( v10 >= 50 )
            goto LABEL_7;
        }
        (*((void (__fastcall **)(struct _RM_ACTIVITY_HOST **))*v6 + 6))(v6);
      }
    }
LABEL_7:
    ;
  }
  if ( (*(_BYTE *)(v4 + 184) & 2) == 0 )
    TpPostWork(*(_QWORD *)(v4 + 176));
}
