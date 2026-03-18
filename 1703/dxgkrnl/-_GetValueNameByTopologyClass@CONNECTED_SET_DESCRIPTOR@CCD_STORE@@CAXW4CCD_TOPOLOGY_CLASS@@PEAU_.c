/*
 * XREFs of ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C00AE87C
 * Callers:
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00AF0D4 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00AF15C (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdi
  const wchar_t *v6; // rax
  __int16 v7; // ax
  __int16 result; // ax
  const wchar_t *v9; // rax
  __int64 v10; // rax

  v5 = (int)a1;
  if ( (_DWORD)a1 == 1 )
  {
    v9 = L"Internal";
    goto LABEL_11;
  }
  if ( (_DWORD)a1 == 2 )
  {
    *(_QWORD *)(a2 + 8) = L"Clone";
    v7 = 12;
    goto LABEL_9;
  }
  if ( (_DWORD)a1 != 4 )
  {
    if ( (_DWORD)a1 != 8 )
    {
      if ( (_DWORD)a1 != 15 )
      {
        v10 = WdLogNewEntry5_WdAssertion(a1, (unsigned int)(a1 - 8), a3, a4);
        *(_QWORD *)(v10 + 24) = v5;
        WdLogEvent5_WdAssertion(v10);
      }
      v6 = L"Recent";
      goto LABEL_8;
    }
    v9 = L"External";
LABEL_11:
    *(_QWORD *)(a2 + 8) = v9;
    v7 = 18;
    goto LABEL_9;
  }
  v6 = L"eXtend";
LABEL_8:
  *(_QWORD *)(a2 + 8) = v6;
  v7 = 14;
LABEL_9:
  *(_WORD *)(a2 + 2) = v7;
  result = v7 - 2;
  *(_WORD *)a2 = result;
  return result;
}
