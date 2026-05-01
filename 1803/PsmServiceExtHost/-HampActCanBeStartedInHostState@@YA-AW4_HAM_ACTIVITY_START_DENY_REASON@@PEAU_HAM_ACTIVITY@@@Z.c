/*
 * XREFs of ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800062A0
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@@Z @ 0x18001B320 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActCanBeStartedInHostState(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  unsigned __int8 v5; // cl
  int v6; // eax
  DWORD v7; // esi
  __int64 v8; // rbp
  _QWORD *Value; // rbx
  int v10; // esi
  _QWORD *v11; // rax
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  int v15; // r8d

  v1 = 8;
  if ( (*(_BYTE *)(a1 + 536) & 8) != 0 )
  {
    return 14;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 80);
    v4 = *(_QWORD *)(v3 + 632);
    v5 = (v4 >> 29) & 7;
    v6 = *(_DWORD *)(a1 + 116);
    if ( (v6 & 0x40) == 0 || !v5 )
    {
      if ( (v6 & 0x80u) == 0 || v5 <= 2u )
      {
        if ( (v4 & 0x1000000000LL) != 0 && (*(_DWORD *)(a1 + 116) & 0x100) != 0 )
        {
          return 10;
        }
        else if ( (*(_DWORD *)(a1 + 112) & 0x200) != 0 && ((v4 & 0x30000) != 0 || (v4 & 0x100000000000LL) == 0) )
        {
          return 12;
        }
        else
        {
          if ( (v6 & 0x200) == 0 )
            goto LABEL_7;
          FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v3);
          if ( !FirstActivity )
            goto LABEL_7;
          do
            FirstActivity = HampHostGetNextActivity(FirstActivity);
          while ( FirstActivity );
          if ( v15 == 1 )
          {
            return 13;
          }
          else
          {
LABEL_7:
            v7 = HampLockTrackerId;
            v8 = *(_QWORD *)(*(_QWORD *)(v3 + 744) + 88LL);
            if ( HampLockTrackerId != -1 )
            {
              Value = TlsGetValue(HampLockTrackerId);
              if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
                __int2c();
              *Value |= 0x40uLL;
              ++Value[7];
            }
            RtlAcquireSRWLockShared(v8 + 304);
            v10 = *(_DWORD *)(v8 + 360);
            if ( HampLockTrackerId != -1 )
            {
              v11 = TlsGetValue(HampLockTrackerId);
              if ( (*(_BYTE *)v11 & 0x40) == 0 )
                __int2c();
              if ( v11[7]-- == 1LL )
                *v11 &= ~0x40uLL;
            }
            RtlReleaseSRWLockShared(v8 + 304);
            return (v10 & 1) != 0 && (*(_BYTE *)(a1 + 112) & 0x40) != 0 ? 0xB : 0;
          }
        }
      }
      else
      {
        return 9;
      }
    }
  }
  return v1;
}
