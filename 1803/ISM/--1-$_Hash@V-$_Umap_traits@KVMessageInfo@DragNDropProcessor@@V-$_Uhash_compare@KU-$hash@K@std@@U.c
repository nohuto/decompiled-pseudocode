/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180063D40
 * Callers:
 *     ??_EDragNDropProcessor@@EEAAPEAXI@Z @ 0x180063C30 (--_EDragNDropProcessor@@EEAAPEAXI@Z.c)
 *     ??1?$unordered_map@KVMessageInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x180063D30 (--1-$unordered_map@KVMessageInfo@DragNDropProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocator.c)
 * Callees:
 *     ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x1800638B8 (--1MessageInfo@DragNDropProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::~_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>(
        _QWORD *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  _QWORD **v5; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx

  v2 = a1[3];
  if ( v2 )
  {
    v3 = (__int64)(a1[5] - v2) >> 3;
    if ( v3 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        a1[3] = 0LL;
        a1[4] = 0LL;
        a1[5] = 0LL;
        goto LABEL_9;
      }
      if ( (v2 & 0x1F) == 0 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 < v2 )
        {
          v2 = v2 - v4 - 8;
          if ( v2 <= 0x1F )
          {
            v2 = v4;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v2, 0x1FFFFFFFFFFFFFFFLL);
    JUMPOUT(0x180063E0FLL);
  }
LABEL_9:
  v5 = (_QWORD **)a1[1];
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  v7 = (_QWORD *)a1[1];
  if ( v6 != v7 )
  {
    do
    {
      v8 = (_QWORD *)*v6;
      DragNDropProcessor::MessageInfo::~MessageInfo((DragNDropProcessor::MessageInfo *)(v6 + 3));
      operator delete(v6);
      v7 = (_QWORD *)a1[1];
      v6 = v8;
    }
    while ( v8 != v7 );
  }
  operator delete(v7);
}
