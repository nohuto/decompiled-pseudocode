/*
 * XREFs of ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x1800EBB94
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z @ 0x1800E8E48 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1800E958C (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1800EA15C (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

_QWORD *__fastcall std::make_shared<PenWorkspace::Discover::AppUsageData,>(_QWORD *a1)
{
  char *v2; // rdi
  _WORD *v3; // rbx
  _QWORD *result; // rax

  v2 = (char *)operator new(0x48uLL);
  *((_DWORD *)v2 + 2) = 1;
  v3 = v2 + 16;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj<PenWorkspace::Discover::AppUsageData>::`vftable';
  if ( v2 != (char *)-16LL )
  {
    memset(v3, 0, 0x38uLL);
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 5) = 7LL;
    *v3 = 0;
    *((_QWORD *)v2 + 6) = 0LL;
    *((_DWORD *)v2 + 14) = 0;
    v2[60] = 0;
    InitializeSRWLock((PSRWLOCK)v2 + 8);
  }
  result = a1;
  *a1 = v3;
  a1[1] = v2;
  return result;
}
