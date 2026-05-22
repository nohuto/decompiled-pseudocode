/*
 * XREFs of ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180006B40
 * Callers:
 *     ?OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z @ 0x180007710 (-OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     McTemplateU0qqqq @ 0x180005A78 (McTemplateU0qqqq.c)
 *     McTemplateU0qqqqqqq @ 0x180005B08 (McTemplateU0qqqqqqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@KPEAUIRawInputProvider@@$0BAA@@@QEAAJAEBKPEAPEAUIRawInputProvider@@@Z @ 0x180007544 (-GetValueForKey@-$FixedSizeMap@KPEAUIRawInputProvider@@$0BAA@@@QEAAJAEBKPEAPEAUIRawInputProvider.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x180009424 (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::OnInputReport(InputStateManager *this, struct InputInfo *a2)
{
  int PointersFromInput; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r9d
  __int64 i; // rbx
  int *v10; // rcx
  DWORD TickCount; // r11d
  __int64 v12; // r8
  unsigned int v13; // r10d
  __int64 v14; // r9
  int v15; // edx
  bool v16; // al
  int v17; // eax
  unsigned int v19; // [rsp+50h] [rbp-88h] BYREF
  __int64 v20; // [rsp+58h] [rbp-80h] BYREF
  struct Pointer *v21[10]; // [rsp+60h] [rbp-78h] BYREF

  v20 = 0LL;
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    McTemplateU0qqqq((__int64)this, &MinInput_Log_InputInfo, 1, *(_DWORD *)a2, *((_DWORD *)a2 + 1), *((_DWORD *)a2 + 2));
  if ( (*(_BYTE *)a2 & 0x3B) != 0 )
  {
    v19 = 0;
    PointersFromInput = GetPointersFromInput(a2, (unsigned int)a2, v21, &v19);
    v7 = PointersFromInput;
    if ( PointersFromInput < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 387;
LABEL_48:
        McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 1, v8, PointersFromInput);
        return v7;
      }
      return v7;
    }
    for ( i = 0LL; (unsigned int)i < v19; i = (unsigned int)(i + 1) )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      {
        v10 = (int *)v21[i];
        McTemplateU0qqqqqqq((__int64)v10, v5, 1, *v10, v10[1], v10[3], v10[4], v10[5], v10[6]);
      }
    }
  }
  TickCount = GetTickCount();
  if ( (*(_DWORD *)a2 & 2) != 0 )
    v12 = *((unsigned __int16 *)a2 + 350);
  else
    v12 = 0LL;
  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    v13 = 3;
  }
  else if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    v13 = 1;
  }
  else if ( (*(_DWORD *)a2 & 2) != 0 )
  {
    v13 = 2;
  }
  else if ( (*(_BYTE *)a2 & 8) != 0 )
  {
    v13 = 10;
  }
  else if ( (*(_BYTE *)a2 & 0x10) != 0 )
  {
    v13 = 12;
  }
  else
  {
    v13 = (*(_DWORD *)a2 & 0x100) != 0 ? 3 : 0;
  }
  v14 = 0xFFFFFFFFLL;
  v15 = ((*(_DWORD *)a2 & *((_DWORD *)this + 2074)) != 0 ? 3 : 1) | 4;
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 2075)) == 0 )
    v15 = (*(_DWORD *)a2 & *((_DWORD *)this + 2074)) != 0 ? 3 : 1;
  if ( *((_BYTE *)a2 + 691) )
  {
    v15 &= ~1u;
  }
  else if ( (*(_BYTE *)a2 & 0xC4) != 0 )
  {
    v14 = *((unsigned int *)this + 2077);
  }
  else
  {
    v14 = 0LL;
  }
  if ( *(_DWORD *)a2 != 2048 )
  {
    if ( *(_DWORD *)a2 == 64 )
    {
      v16 = *((_BYTE *)a2 + 761) == 0;
    }
    else
    {
      if ( (*(_DWORD *)a2 & 0x200) == 0
        || ((v17 = *((_DWORD *)a2 + 174), v17 != 8) || *((_BYTE *)a2 + 1384)) && (unsigned int)(v17 - 4) > 2 )
      {
LABEL_41:
        MITUpdateInputGlobals(TickCount, v13, v12, v14, v15);
        goto LABEL_42;
      }
      v16 = 1;
    }
    if ( v16 )
      goto LABEL_42;
    goto LABEL_41;
  }
LABEL_42:
  PointersFromInput = FixedSizeMap<unsigned long,IRawInputProvider *,256>::GetValueForKey(
                        (char *)this + 72,
                        (char *)a2 + 4,
                        &v20);
  v7 = PointersFromInput;
  if ( PointersFromInput >= 0 )
  {
    PointersFromInput = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v20 + 48LL))(v20, a2);
    v7 = PointersFromInput;
    if ( PointersFromInput < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 406;
      goto LABEL_48;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 404;
    goto LABEL_48;
  }
  return v7;
}
