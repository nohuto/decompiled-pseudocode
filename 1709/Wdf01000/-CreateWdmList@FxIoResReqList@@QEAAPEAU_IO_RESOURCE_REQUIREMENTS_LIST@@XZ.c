/*
 * XREFs of ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0010E60
 * Callers:
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0021D9C (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00225FC (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

_IO_RESOURCE_REQUIREMENTS_LIST *__fastcall FxIoResReqList::CreateWdmList(FxIoResReqList *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxCollectionInternal *v2; // r14
  __int64 m_Count; // r10
  unsigned int v4; // r11d
  unsigned int *v5; // rbx
  _LIST_ENTRY *i; // r9
  _LIST_ENTRY **p_Blink; // r9
  unsigned int v9; // r8d
  int v10; // eax
  unsigned int v11; // edx
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // esi
  _DWORD *PoolWithTag; // rax
  char *v19; // rdi
  _LIST_ENTRY *j; // rdx
  _LIST_ENTRY *v21; // rcx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY **v23; // r8
  _LIST_ENTRY **v24; // rdx
  _LIST_ENTRY *v26; // rax

  m_Globals = this->m_Globals;
  v2 = &this->FxCollectionInternal;
  m_Count = this->m_Count;
  v4 = 0;
  v5 = 0LL;
  if ( (_DWORD)m_Count )
  {
    for ( i = this->m_ListHead.Flink; ; i = p_Blink[1] )
    {
      p_Blink = &i[-1].Blink;
      if ( p_Blink == (_LIST_ENTRY **)v2 )
        break;
      v9 = v4;
      v10 = -1;
      v11 = v4 + LODWORD((*p_Blink)[7].Blink);
      if ( v11 >= v4 )
        v10 = v4 + LODWORD((*p_Blink)[7].Blink);
      v4 = v10;
      if ( v11 < v9 )
        goto LABEL_22;
    }
    v12 = 40LL * (unsigned int)(m_Count - 1);
    if ( v12 > 0xFFFFFFFF
      || (unsigned int)(v12 + 72) < 0x48
      || (v13 = v12 + 72, v14 = 32LL * v4, v14 > 0xFFFFFFFF)
      || (unsigned int)v14 + v13 < v13
      || (v15 = v14 + v13, (unsigned __int64)(32 * m_Count) > 0xFFFFFFFF)
      || (v16 = 32 * m_Count, v15 < 32 * (int)m_Count) )
    {
LABEL_22:
      WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0xCu, WPP_FxResourceCollection_cpp_Traceguids);
      return 0LL;
    }
    v17 = v15 - v16;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15 - v16, m_Globals->Tag);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      v19 = (char *)(PoolWithTag + 8);
      memset(PoolWithTag, 0, v17);
      v5[1] = this->m_InterfaceType;
      v5[3] = this->m_SlotNumber;
      *v5 = v17;
      v5[7] = v2->m_Count;
      for ( j = this->m_ListHead.Flink; ; j = v24[1] )
      {
        v24 = &j[-1].Blink;
        if ( v24 == (_LIST_ENTRY **)v2 )
          break;
        v21 = *v24;
        *(_DWORD *)v19 = 65537;
        *((_DWORD *)v19 + 1) = v21[7].Blink;
        v19 += 8;
        Flink = v21[8].Flink;
        while ( 1 )
        {
          v23 = &Flink[-1].Blink;
          if ( v23 == &v21[7].Blink )
            break;
          v26 = *v23;
          *(_LIST_ENTRY *)v19 = *(_LIST_ENTRY *)((char *)*v23 + 104);
          *((_LIST_ENTRY *)v19 + 1) = *(_LIST_ENTRY *)((char *)v26 + 120);
          Flink = v23[1];
          v19 += 32;
        }
      }
    }
  }
  return (_IO_RESOURCE_REQUIREMENTS_LIST *)v5;
}
