/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800111C4
 * Callers:
 *     ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x18000B164 (--_EWin32kInterop@@UEAAPEAXI@Z.c)
 *     ??1?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@QEAA@XZ @ 0x18000B22C (--1-$unordered_map@KUTargetingInfo@Win32kInterop@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocator@U-.c)
 * Callees:
 *     ??1TargetingInfo@Win32kInterop@@QEAA@XZ @ 0x1800102C4 (--1TargetingInfo@Win32kInterop@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::~_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>(
        __int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  _QWORD **v5; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = (__int64)(*(_QWORD *)(a1 + 40) - v2) >> 3;
    if ( v3 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 32) = 0LL;
        *(_QWORD *)(a1 + 40) = 0LL;
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
    _o__invalid_parameter_noinfo_noreturn(v2);
    JUMPOUT(0x180011291LL);
  }
LABEL_9:
  v5 = *(_QWORD ***)(a1 + 8);
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( v6 != *(_QWORD **)(a1 + 8) )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      Win32kInterop::TargetingInfo::~TargetingInfo((Win32kInterop::TargetingInfo *)(v6 + 3));
      operator delete(v6);
      v6 = v7;
    }
    while ( v7 != *(_QWORD **)(a1 + 8) );
  }
  operator delete(*(void **)(a1 + 8));
}
