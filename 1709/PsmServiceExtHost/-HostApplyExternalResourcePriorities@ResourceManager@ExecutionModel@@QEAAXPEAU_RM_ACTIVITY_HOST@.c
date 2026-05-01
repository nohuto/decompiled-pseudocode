/*
 * XREFs of ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EE44
 * Callers:
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EEC0 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B54C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18003D3D4 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
        unsigned __int64 this,
        struct _RM_ACTIVITY_HOST *a2)
{
  _QWORD *v3; // r14
  unsigned __int64 v4; // rsi
  _QWORD *i; // rbx
  struct _RM_ACTIVITY_HOST **v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  struct _RM_ACTIVITY_HOST **v9; // rax

  v3 = (_QWORD *)(*(_QWORD *)(this + 96) + 160LL);
  v4 = this;
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v6 = (struct _RM_ACTIVITY_HOST **)i[2];
    if ( a2 == v6[182] )
    {
      if ( (*((_BYTE *)a2 + 866) & 4) != 0 && (*((unsigned __int8 (__fastcall **)(_QWORD))*v6 + 7))(i[2]) )
      {
        LODWORD(this) = 3;
        while ( 1 )
        {
          v7 = (unsigned int)this + 8LL;
          if ( LODWORD(v6[3 * v7]) == (_DWORD)this && !BYTE5(v6[3 * v7 + 2]) )
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
        v8 = 3LL;
        v9 = v6 + 35;
        while ( 1 )
        {
          if ( *((_BYTE *)v9 + 5) && *(_DWORD *)v9 == 101 )
          {
            this = *((unsigned int *)v6 + 350);
            if ( (_DWORD)this == 2 && *(v9 - 1) )
            {
              ExecutionModel::ExternalResourceSet::Revoke(v6, 0LL);
              goto LABEL_7;
            }
            if ( (_DWORD)this == 1 )
              break;
          }
          ++v8;
          v9 += 3;
          if ( v8 >= 50 )
            goto LABEL_7;
        }
        (*((void (__fastcall **)(struct _RM_ACTIVITY_HOST **))*v6 + 6))(v6);
      }
    }
LABEL_7:
    ;
  }
  if ( (*(_BYTE *)(v4 + 240) & 2) == 0 )
    TpPostWork(*(_QWORD *)(v4 + 232));
}
