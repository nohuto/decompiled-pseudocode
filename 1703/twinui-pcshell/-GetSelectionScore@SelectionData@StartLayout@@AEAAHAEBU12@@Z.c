/*
 * XREFs of ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18008AB7C
 * Callers:
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18008C788 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedPenWorkspaceLayout@@@Z@2@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1800CEA60 (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV-$vector@UParsedPenWorkspaceL.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?CompareStringVector@SelectionData@StartLayout@@AEAAXV?$vector@PEAGV?$allocator@PEAG@std@@@std@@_N01AEAH@Z @ 0x18008AD70 (-CompareStringVector@SelectionData@StartLayout@@AEAAXV-$vector@PEAGV-$allocator@PEAG@std@@@std@@.c)
 *     ??0?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18008C53C (--0-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@.c)
 *     ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x18008C66C (--0-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall StartLayout::SelectionData::GetSelectionScore(
        StartLayout::SelectionData *this,
        const struct StartLayout::SelectionData *a2)
{
  int v4; // r15d
  int v5; // ebx
  int v6; // edx
  int v7; // r8d
  int v8; // ecx
  int v9; // ebx
  __int64 v10; // r13
  char **v11; // rax
  char **v12; // r12
  char *i; // rax
  char *v14; // rcx
  int v15; // eax
  _BYTE v17[24]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v18[32]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE *v19; // [rsp+B0h] [rbp+40h] BYREF
  _BYTE *v20; // [rsp+C0h] [rbp+50h]

  v4 = 0;
  LODWORD(v19) = 0;
  if ( !*((_BYTE *)this + 61) && *((_BYTE *)a2 + 61) == 1 )
    return (unsigned int)-1;
  v20 = v17;
  v5 = std::vector<unsigned short *>::vector<unsigned short *>(v17, (char *)a2 + 8);
  v6 = std::vector<unsigned short *>::vector<unsigned short *>(v18, (char *)this + 8);
  LOBYTE(v7) = *(_BYTE *)this;
  StartLayout::SelectionData::CompareStringVector(v8, v6, v7, v5, *(_BYTE *)a2, (__int64)&v19);
  v9 = (int)v19;
  if ( (int)v19 >= 0 )
  {
    if ( *((_BYTE *)this + 1) && *((_BYTE *)a2 + 1) )
    {
      if ( *((_DWORD *)this + 14) == *((_DWORD *)a2 + 14) )
        v9 = (_DWORD)v19 + 1;
      else
        v9 = -1;
    }
    if ( v9 >= 0 )
    {
      if ( *((_BYTE *)this + 2) && *((_BYTE *)a2 + 2) )
      {
        if ( *((_BYTE *)this + 60) == *((_BYTE *)a2 + 60) )
          ++v9;
        else
          v9 = -1;
      }
      if ( v9 >= 0 )
      {
        v19 = v18;
        v10 = std::vector<enum SharedStartModel::LayoutSKU>::vector<enum SharedStartModel::LayoutSKU>(
                v18,
                (char *)a2 + 32);
        v11 = (char **)std::vector<enum SharedStartModel::LayoutSKU>::vector<enum SharedStartModel::LayoutSKU>(
                         v17,
                         (char *)this + 32);
        v12 = v11;
        if ( *((_BYTE *)this + 3) && *((_BYTE *)a2 + 3) )
        {
          for ( i = *v11; ; i += 4 )
          {
            if ( i == v12[1] )
            {
              v4 = -1;
              goto LABEL_26;
            }
            v14 = *(char **)v10;
            if ( *(_QWORD *)v10 != *(_QWORD *)(v10 + 8) )
              break;
LABEL_23:
            ;
          }
          while ( *(_DWORD *)i != *(_DWORD *)v14 )
          {
            v14 += 4;
            if ( v14 == *(char **)(v10 + 8) )
              goto LABEL_23;
          }
          v4 = 1;
        }
LABEL_26:
        if ( *v12 )
        {
          std::_Deallocate(*v12, (v12[2] - *v12) >> 2, 4uLL);
          *v12 = 0LL;
          v12[1] = 0LL;
          v12[2] = 0LL;
        }
        if ( *(_QWORD *)v10 )
        {
          std::_Deallocate(*(char **)v10, (__int64)(*(_QWORD *)(v10 + 16) - *(_QWORD *)v10) >> 2, 4uLL);
          *(_QWORD *)v10 = 0LL;
          *(_QWORD *)(v10 + 8) = 0LL;
          *(_QWORD *)(v10 + 16) = 0LL;
        }
        v15 = v9 + 100 * v4;
        v9 = v4;
        if ( v4 >= 0 )
          v9 = v15;
        if ( v9 >= 0 )
        {
          if ( *((_BYTE *)this + 4) && *((_BYTE *)a2 + 4) )
          {
            if ( *((_BYTE *)this + 61) == *((_BYTE *)a2 + 61) )
              ++v9;
            else
              v9 = -1;
          }
          if ( v9 >= 0 && *((_BYTE *)this + 5) && *((_BYTE *)a2 + 5) )
          {
            if ( *((_DWORD *)this + 16) == *((_DWORD *)a2 + 16) )
              return (unsigned int)++v9;
            return (unsigned int)-1;
          }
        }
      }
    }
  }
  return (unsigned int)v9;
}
