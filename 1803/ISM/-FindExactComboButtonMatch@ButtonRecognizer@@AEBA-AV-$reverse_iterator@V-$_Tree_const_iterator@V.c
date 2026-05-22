/*
 * XREFs of ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1800B735C
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800B7B64 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x180008DF4 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ?_Tidy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXXZ @ 0x18002576C (-_Tidy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAXXZ.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800B8060 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@_JU?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800B8790 (--$_Sort_unchecked@PEAW4_Button@@_JU-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ButtonRecognizer::FindExactComboButtonMatch(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 *v8; // rbx
  __int64 v9; // rax
  bool i; // zf
  __int64 *v11; // rax
  __int64 v12; // r9
  _DWORD *v13; // rdx
  __int64 v14; // r8
  __int64 v16; // r8
  _DWORD *v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  __int64 *v21; // [rsp+70h] [rbp+30h] BYREF
  __int64 *v22; // [rsp+78h] [rbp+38h] BYREF

  std::vector<enum _Button>::vector<enum _Button>(&v19, a3);
  v6 = (__int64)(v20 - v19) >> 2;
  LOBYTE(v7) = (_BYTE)v21;
  std::_Sort_unchecked<enum _Button *,__int64,std::less<void>>(v19, v20, v6, v7);
  v8 = *(__int64 **)(a1 + 32);
  v9 = *v8;
  *a2 = *v8;
  v22 = v8;
  for ( i = v8 == (__int64 *)v9; !i; i = v22 == **(__int64 ***)(a1 + 32) )
  {
    v21 = v8;
    std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v21);
    v11 = v21;
    v21 = v8;
    if ( *((_BYTE *)v11 + 40) )
    {
      std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v21);
      v12 = v21[7];
      v13 = (_DWORD *)v21[6];
      if ( (v12 - (__int64)v13) >> 2 == (__int64)(a3[1] - *a3) >> 2 )
      {
        if ( v13 == (_DWORD *)v12 )
        {
LABEL_9:
          *a2 = v8;
          break;
        }
        v14 = *a3 - (_QWORD)v13;
        while ( *v13 == *(_DWORD *)((char *)v13 + v14) )
        {
          if ( ++v13 == (_DWORD *)v12 )
            goto LABEL_9;
        }
      }
    }
    else
    {
      std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v21);
      v16 = v21[7];
      v17 = (_DWORD *)v21[6];
      if ( (v16 - (__int64)v17) >> 2 == v6 )
      {
        if ( v17 == (_DWORD *)v16 )
        {
LABEL_16:
          *a2 = v8;
        }
        else
        {
          v18 = v19 - (_QWORD)v17;
          while ( *v17 == *(_DWORD *)((char *)v17 + v18) )
          {
            if ( ++v17 == (_DWORD *)v16 )
              goto LABEL_16;
          }
        }
      }
    }
    std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v22);
    v8 = v22;
  }
  std::vector<enum _Button>::_Tidy(&v19);
  return a2;
}
