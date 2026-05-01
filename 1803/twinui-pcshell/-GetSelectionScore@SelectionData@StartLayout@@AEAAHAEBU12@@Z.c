/*
 * XREFs of ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18014ADF4
 * Callers:
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x180149D30 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedPenWorkspaceLayout@@@Z@2@PEAUParsedPenWorkspaceLayout@@@Z @ 0x18019B978 (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV-$vector@UParsedPenWorkspaceL.c)
 * Callees:
 *     ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x18014A50C (--0-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18014A5F4 (--0-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@.c)
 *     ?CompareStringVector@SelectionData@StartLayout@@AEAAXV?$vector@PEAGV?$allocator@PEAG@std@@@std@@_N01AEAH@Z @ 0x18014AC14 (-CompareStringVector@SelectionData@StartLayout@@AEAAXV-$vector@PEAGV-$allocator@PEAG@std@@@std@@.c)
 *     ?_Tidy@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@AEAAXXZ @ 0x18014BE30 (-_Tidy@-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall StartLayout::SelectionData::GetSelectionScore(
        StartLayout::SelectionData *this,
        const struct StartLayout::SelectionData *a2)
{
  void **v4; // rbx
  void **v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // r15d
  void **v9; // r12
  void **v10; // rax
  void **v11; // rdx
  _DWORD *v12; // rcx
  _DWORD *v13; // rax
  void *v15[3]; // [rsp+38h] [rbp-38h] BYREF
  void *v16[4]; // [rsp+50h] [rbp-20h] BYREF
  void **v17; // [rsp+B0h] [rbp+40h] BYREF
  void **v18; // [rsp+C0h] [rbp+50h]

  LODWORD(v17) = 0;
  if ( !*((_BYTE *)this + 61) && *((_BYTE *)a2 + 61) == 1 )
    return (unsigned int)-1;
  v18 = v15;
  v4 = std::vector<unsigned short *>::vector<unsigned short *>(v15, (__int64)a2 + 8);
  v5 = std::vector<unsigned short *>::vector<unsigned short *>(v16, (__int64)this + 8);
  StartLayout::SelectionData::CompareStringVector(
    v6,
    (LPCWCH **)v5,
    *(_BYTE *)this,
    (LPCWCH **)v4,
    *(_BYTE *)a2,
    (int *)&v17);
  v7 = (int)v17;
  if ( (int)v17 >= 0 )
  {
    if ( *((_BYTE *)this + 1) && *((_BYTE *)a2 + 1) )
    {
      if ( *((_DWORD *)this + 14) == *((_DWORD *)a2 + 14) )
        v7 = (_DWORD)v17 + 1;
      else
        v7 = -1;
    }
    if ( v7 >= 0 )
    {
      if ( *((_BYTE *)this + 2) && *((_BYTE *)a2 + 2) )
      {
        if ( *((_BYTE *)this + 60) == *((_BYTE *)a2 + 60) )
          ++v7;
        else
          v7 = -1;
      }
      if ( v7 >= 0 )
      {
        v8 = 0;
        v17 = v16;
        v9 = std::vector<enum SharedStartModel::LayoutSKU>::vector<enum SharedStartModel::LayoutSKU>(
               v16,
               (__int64)a2 + 32);
        v10 = std::vector<enum SharedStartModel::LayoutSKU>::vector<enum SharedStartModel::LayoutSKU>(
                v15,
                (__int64)this + 32);
        v11 = v10;
        if ( *((_BYTE *)this + 3) && *((_BYTE *)a2 + 3) )
        {
          v12 = *v10;
          if ( *v10 == v10[1] )
          {
LABEL_23:
            v8 = -1;
          }
          else
          {
            while ( 1 )
            {
              v13 = *v9;
              if ( *v9 != v9[1] )
                break;
LABEL_22:
              if ( ++v12 == v11[1] )
                goto LABEL_23;
            }
            while ( *v12 != *v13 )
            {
              if ( ++v13 == v9[1] )
                goto LABEL_22;
            }
            v8 = 1;
          }
        }
        std::vector<enum SharedStartModel::LayoutSKU>::_Tidy(v11);
        std::vector<enum SharedStartModel::LayoutSKU>::_Tidy(v9);
        if ( v8 < 0 )
          v7 = v8;
        else
          v7 += 100 * v8;
        if ( v7 >= 0 )
        {
          if ( *((_BYTE *)this + 4) && *((_BYTE *)a2 + 4) )
          {
            if ( *((_BYTE *)this + 61) == *((_BYTE *)a2 + 61) )
              ++v7;
            else
              v7 = -1;
          }
          if ( v7 >= 0 && *((_BYTE *)this + 5) && *((_BYTE *)a2 + 5) )
          {
            if ( *((_DWORD *)this + 16) == *((_DWORD *)a2 + 16) )
              return (unsigned int)++v7;
            return (unsigned int)-1;
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
