/*
 * XREFs of ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x180031064
 * Callers:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180017240 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180044F84 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTimelineBase::UpdateBeforeTickWorker(CTimelineBase *this, struct WindowsAnimation *a2)
{
  _QWORD *v2; // r14
  __int64 v4; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ecx
  int v11; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  v2 = (_QWORD *)((char *)this + 64);
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *v2 = 0LL;
  }
  if ( *((double *)this + 3) < 0.01 )
  {
    CTimelineBase::JumpToFinalValue(this);
    v6 = 0;
    goto LABEL_12;
  }
  v6 = *(_QWORD *)a2 == 0LL ? 0x800401F0 : 0;
  if ( !*(_QWORD *)a2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xA3u);
    goto LABEL_12;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct WindowsAnimation *, _QWORD *))(**(_QWORD **)a2 + 24LL))(
         *(_QWORD *)a2,
         a2,
         v2);
  v6 = v7;
  if ( v7 < 0 )
  {
    v15 = 165;
    goto LABEL_38;
  }
  v10 = *((_DWORD *)this + 14);
  if ( !v10 )
  {
LABEL_15:
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)a2 + 1) + 48LL))(
           *((_QWORD *)a2 + 1),
           v8,
           v9,
           &v16);
    v6 = v7;
    if ( v7 >= 0 )
      goto LABEL_10;
    v15 = 180;
    goto LABEL_38;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v13 = v11 - 1;
    if ( !v13 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 112LL))(*((_QWORD *)a2 + 1));
      v6 = v7;
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
        v6 = v7;
        if ( v7 >= 0 )
          goto LABEL_10;
        v15 = 204;
      }
      else
      {
        v15 = 203;
      }
      goto LABEL_38;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 96LL))(*((_QWORD *)a2 + 1));
      v6 = v7;
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
        v6 = v7;
        if ( v7 >= 0 )
          goto LABEL_10;
        v15 = 216;
      }
      else
      {
        v15 = 215;
      }
      goto LABEL_38;
    }
    if ( v14 == 1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)a2 + 1) + 32LL))(
             *((_QWORD *)a2 + 1),
             v8,
             &v16);
      v6 = v7;
      if ( v7 >= 0 )
        goto LABEL_10;
      v15 = 221;
      goto LABEL_38;
    }
    goto LABEL_15;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 96LL))(*((_QWORD *)a2 + 1));
  v6 = v7;
  if ( v7 < 0 )
  {
    v15 = 191;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
    v6 = v7;
    if ( v7 >= 0 )
    {
LABEL_10:
      if ( *((_QWORD *)a2 + 2)
        || (v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, (char *)a2 + 16),
            v6 = v7,
            v7 >= 0) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)a2 + 2) + 24LL))(
               *((_QWORD *)a2 + 2),
               *v2,
               v16);
        v6 = v7;
        if ( v7 >= 0 )
          goto LABEL_12;
        v15 = 229;
      }
      else
      {
        v15 = 227;
      }
      goto LABEL_38;
    }
    v15 = 192;
  }
LABEL_38:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v15);
LABEL_12:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v6;
}
