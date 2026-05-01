/*
 * XREFs of ??1?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAA@XZ @ 0x1800E5BCC
 * Callers:
 *     ??_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1800E56E0 (--_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z.c)
 *     ??1?$queue@UForegroundSwitchData@Discover@PenWorkspace@@V?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@@std@@QEAA@XZ @ 0x1800E5964 (--1-$queue@UForegroundSwitchData@Discover@PenWorkspace@@V-$deque@UForegroundSwitchData@Discover@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::deque<PenWorkspace::Discover::ForegroundSwitchData>::~deque<PenWorkspace::Discover::ForegroundSwitchData>(
        __int64 a1)
{
  __int64 v3; // rdi
  void *v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  while ( *(_QWORD *)(a1 + 32) )
  {
    if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 16);
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v3);
    if ( v4 )
      operator delete(v4);
  }
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v6 < 0x1000 )
      {
LABEL_16:
        operator delete((void *)v5);
        goto LABEL_17;
      }
      if ( (v5 & 0x1F) == 0 )
      {
        v7 = *(_QWORD *)(v5 - 8);
        if ( v7 < v5 )
        {
          v5 = v5 - v7 - 8;
          if ( v5 <= 0x1F )
          {
            v5 = v7;
            goto LABEL_16;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v5);
    JUMPOUT(0x1800E5C80LL);
  }
LABEL_17:
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  operator delete(*(void **)a1);
  *(_QWORD *)a1 = 0LL;
}
