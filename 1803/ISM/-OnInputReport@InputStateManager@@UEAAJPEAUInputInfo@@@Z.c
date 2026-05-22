/*
 * XREFs of ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180006BB0
 * Callers:
 *     ?OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z @ 0x180007600 (-OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180005E58 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?GetValueForKey@?$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKPEAPEAUIInputProcessor@@@Z @ 0x180007480 (-GetValueForKey@-$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKPEAPEAUIInputProcessor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::OnInputReport(InputStateManager *this, struct InputInfo *a2)
{
  DWORD TickCount; // esi
  unsigned __int16 v5; // r11
  bool v6; // r8
  unsigned int v7; // r10d
  __int64 v8; // r9
  int v9; // edx
  int v10; // eax
  __int64 result; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  InputETW::InputStateManager::OnInputReport(a2);
  TickCount = GetTickCount();
  if ( (*(_DWORD *)a2 & 2) != 0 )
    v5 = *((_WORD *)a2 + 262);
  else
    v5 = 0;
  v6 = 1;
  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    v7 = 3;
  }
  else if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    v7 = 1;
  }
  else if ( (*(_DWORD *)a2 & 2) != 0 )
  {
    v7 = 2;
  }
  else if ( (*(_BYTE *)a2 & 8) != 0 )
  {
    v7 = 10;
  }
  else if ( (*(_BYTE *)a2 & 0x10) != 0 )
  {
    v7 = 12;
  }
  else
  {
    v7 = (*(_DWORD *)a2 & 0x100) != 0 ? 3 : 0;
  }
  v8 = 0xFFFFFFFFLL;
  v9 = ((*(_DWORD *)a2 & *((_DWORD *)this + 2074)) != 0 ? 3 : 1) | 4;
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 2075)) == 0 )
    v9 = (*(_DWORD *)a2 & *((_DWORD *)this + 2074)) != 0 ? 3 : 1;
  if ( *((_BYTE *)a2 + 513) )
  {
    v9 &= ~1u;
  }
  else if ( (*(_BYTE *)a2 & 0xC4) != 0 )
  {
    v8 = *((unsigned int *)this + 2077);
  }
  else
  {
    v8 = 0LL;
  }
  if ( *(_DWORD *)a2 != 2048 )
  {
    if ( *(_DWORD *)a2 == 64 )
    {
      v6 = *((_BYTE *)a2 + 585) == 0;
    }
    else if ( (*(_DWORD *)a2 & 0x22600) == 0
           || ((v10 = *((_DWORD *)a2 + 130), v10 != 8) || *((_BYTE *)a2 + 1208)) && (unsigned int)(v10 - 4) > 2 )
    {
LABEL_30:
      MITUpdateInputGlobals(TickCount, v7, v5, v8, v9);
      goto LABEL_31;
    }
    if ( v6 )
      goto LABEL_31;
    goto LABEL_30;
  }
LABEL_31:
  result = FixedSizeMap<unsigned long,IInputProcessor *,256>::GetValueForKey((char *)this + 72, (char *)a2 + 4, &v12);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v12 + 48LL))(v12, a2);
  return result;
}
