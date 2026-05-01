/*
 * XREFs of ??1?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA@XZ @ 0x1800E5894
 * Callers:
 *     _PenWorkspaceDiscoverBroker::RuntimeClassInitialize_::_1_::dtor$4 @ 0x1801EC227 (_PenWorkspaceDiscoverBroker--RuntimeClassInitialize_--_1_--dtor$4.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall std::unordered_map<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~unordered_map<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>(
        _QWORD *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax

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
        return std::list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::~list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>(a1 + 1);
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
    JUMPOUT(0x1800E5912LL);
  }
  return std::list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::~list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>(a1 + 1);
}
