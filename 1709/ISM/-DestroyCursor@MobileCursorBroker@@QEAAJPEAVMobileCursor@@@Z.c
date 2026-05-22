/*
 * XREFs of ?DestroyCursor@MobileCursorBroker@@QEAAJPEAVMobileCursor@@@Z @ 0x18002FF40
 * Callers:
 *     ??_GMobileCursor@@MEAAPEAXI@Z @ 0x180030914 (--_GMobileCursor@@MEAAPEAXI@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z @ 0x180030460 (-ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z.c)
 *     ?SetValueForKey@?$FixedSizeMap@UCursorId@@PEAVMobileCursor@@$0DC@@@QEAAJAEBUCursorId@@AEBQEAVMobileCursor@@@Z @ 0x180030758 (-SetValueForKey@-$FixedSizeMap@UCursorId@@PEAVMobileCursor@@$0DC@@@QEAAJAEBUCursorId@@AEBQEAVMob.c)
 *     ?GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ @ 0x1800309F4 (-GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::DestroyCursor(MobileCursorBroker *this, struct MobileCursor *a2)
{
  HMONITOR HMonitor; // rax
  __int64 v5; // rsi
  int v6; // r9d
  HMONITOR v7; // r12
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdi
  MobileCursor *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // al
  int v19; // r9d
  char v20; // r9
  __int64 v21; // r10
  char v22; // al
  __int128 v24; // [rsp+30h] [rbp-1E8h] BYREF
  _DWORD v25[4]; // [rsp+40h] [rbp-1D8h] BYREF
  MobileCursor *v26[50]; // [rsp+50h] [rbp-1C8h]

  (*(void (__fastcall **)(struct MobileCursor *, _DWORD *))(*(_QWORD *)a2 + 40LL))(a2, v25);
  HMonitor = MobileCursor::GetHMonitor(a2);
  v5 = 0LL;
  v6 = *((_DWORD *)this + 324);
  v7 = HMonitor;
  v8 = (char *)this + 96;
  v9 = 50LL;
  do
  {
    if ( *(_DWORD *)v8 != v6 )
    {
      v26[v5] = (MobileCursor *)*((_QWORD *)v8 + 2);
      v5 = (unsigned int)(v5 + 1);
    }
    v8 += 24;
    --v9;
  }
  while ( v9 );
  v10 = 0LL;
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      v11 = v26[v10];
      if ( v11 != a2 && *((_BYTE *)v11 + 56) && MobileCursor::GetHMonitor(v11) == v7 )
        break;
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= (unsigned int)v5 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    MobileCursorBroker::ShowCursor(this, a2, 0);
  }
  *(_QWORD *)&v24 = 0LL;
  v12 = FixedSizeMap<CursorId,MobileCursor *,50>::SetValueForKey((char *)this + 96, v25, &v24);
  v14 = v12;
  if ( v12 >= 0 )
  {
    v15 = v25[0];
    v16 = 0LL;
    v17 = (__int64)this + 96;
    while ( *(_DWORD *)v17 != v25[0] )
    {
      v16 = (unsigned int)(v16 + 1);
      v17 += 24LL;
      if ( (unsigned int)v16 >= 0x32 )
      {
        v18 = Microsoft_OneCore_MinInputEnableBits;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, 212, 5);
          v18 = Microsoft_OneCore_MinInputEnableBits;
        }
        v14 = -2147467259;
        if ( (v18 & 2) != 0 )
        {
          v19 = 428;
LABEL_31:
          McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, v19, 5);
          return v14;
        }
        return v14;
      }
    }
    v20 = 0;
    *(_OWORD *)((char *)this + 24 * v16 + 96) = *((_OWORD *)this + 81);
    v17 = 0LL;
    if ( *((_DWORD *)this + 330) )
    {
      do
      {
        v21 = *((_QWORD *)this + 164);
        if ( *(_DWORD *)(v21 + 24 * v17 + 8) == v15 )
        {
          v20 = 1;
          *(_QWORD *)(v21 + 24 * v17) = *((_QWORD *)this + 166);
          v24 = 0uLL;
          *(_OWORD *)(*((_QWORD *)this + 164) + 24 * v17 + 8) = 0uLL;
          --*((_DWORD *)this + 331);
          v15 = v25[0];
        }
        v17 = (unsigned int)(v17 + 1);
      }
      while ( (unsigned int)v17 < *((_DWORD *)this + 330) );
      if ( v20 )
        return 0;
    }
    v22 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, 249, 5);
      v22 = Microsoft_OneCore_MinInputEnableBits;
    }
    v14 = -2147467259;
    if ( (v22 & 2) != 0 )
    {
      v19 = 430;
      goto LABEL_31;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 427, v12);
  }
  return v14;
}
