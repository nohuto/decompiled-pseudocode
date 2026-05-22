/*
 * XREFs of ?PutTouchEvent@LegacyInjectionRawInputProvider@@UEAAJUTouchInfoInjection@@@Z @ 0x180086E00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     McTemplateU0p @ 0x18008611C (McTemplateU0p.c)
 *     ?FillPointerInfo@LegacyInjectionRawInputProvider@@AEAAXPEAUtagPOINTER_INFO@@AEBUTouchContact@@HAEAUtagLegacyISMPOSTINPUTINFO@@@Z @ 0x180087194 (-FillPointerInfo@LegacyInjectionRawInputProvider@@AEAAXPEAUtagPOINTER_INFO@@AEBUTouchContact@@HA.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::PutTouchEvent(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  unsigned int v9; // eax
  int *v10; // rdx
  __int16 *v11; // rdi
  __int64 v12; // r9
  __int16 v13; // r8
  int v14; // eax
  char v15; // al
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // esi
  unsigned int v19; // edx
  __int16 v20; // r11
  __int64 v21; // r14
  __int16 v22; // r15
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // r9d
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v29[62]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v30[356]; // [rsp+420h] [rbp+320h] BYREF

  v5 = 0;
  if ( !*(_BYTE *)(a1 + 72) )
  {
    LOBYTE(a3) = 1;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 2LL, a3);
    v5 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 592, v6);
      goto LABEL_36;
    }
  }
  if ( *(_BYTE *)(a2 + 23) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( (gdwMitConfig & 4) != 0 )
    {
      memset(v29, 0, 0x3D8uLL);
      v18 = 0;
      DWORD1(v29[0]) = *(_DWORD *)(a2 + 4);
      *((LARGE_INTEGER *)&v29[0] + 1) = PerformanceCount;
      if ( *(_BYTE *)(a2 + 23) )
      {
        v19 = v29[0];
        v20 = 5;
        do
        {
          v21 = a2 + 56LL * v18;
          v22 = *(_WORD *)(v21 + 26);
          if ( v20 == v22 )
            *(_WORD *)(v21 + 26) = 9;
          LegacyInjectionRawInputProvider::FillPointerInfo(
            (LegacyInjectionRawInputProvider *)(96LL * v19),
            (struct tagPOINTER_INFO *)((char *)&v29[6 * v19 + 1] + 8),
            (const struct TouchContact *)(v21 + 24),
            v19 == 0,
            (struct tagLegacyISMPOSTINPUTINFO *)v29);
          v19 = ++LODWORD(v29[0]);
          if ( v20 == v22 )
          {
            v23 = MITInjectLegacyISMTouchFrame(v29);
            v5 = v23 | 0x10000000;
            if ( v23 < 0 )
            {
              v19 = v29[0];
            }
            else
            {
              memset(v29, 0, 0x3D8uLL);
              DWORD1(v29[0]) = *(_DWORD *)(a2 + 4);
              *((LARGE_INTEGER *)&v29[0] + 1) = PerformanceCount;
              *(_WORD *)(v21 + 26) = 4;
              LegacyInjectionRawInputProvider::FillPointerInfo(
                (LegacyInjectionRawInputProvider *)(96LL * LODWORD(v29[0])),
                (struct tagPOINTER_INFO *)((char *)&v29[6 * LODWORD(v29[0]) + 1] + 8),
                (const struct TouchContact *)(v21 + 24),
                LODWORD(v29[0]) == 0,
                (struct tagLegacyISMPOSTINPUTINFO *)v29);
              v19 = ++LODWORD(v29[0]);
            }
            *(_WORD *)(v21 + 26) = v22;
            if ( v5 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v26 = 709;
LABEL_35:
                McTemplateU0qqq(v24, &MinInput_Warning_CheckResult, 0, v26, v5);
              }
              goto LABEL_36;
            }
            v20 = 5;
          }
          ++v18;
        }
        while ( v18 < *(unsigned __int8 *)(a2 + 23) );
      }
      v25 = MITInjectLegacyISMTouchFrame(v29);
      v5 = v25 | 0x10000000;
      if ( v25 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v26 = 717;
          goto LABEL_35;
        }
LABEL_36:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
    else
    {
      memset(v30, 0, sizeof(v30));
      v8 = *(_DWORD **)(a1 + 80);
      HIDWORD(v30[0]) = *v8;
      LODWORD(v30[0]) = v8[1];
      LODWORD(v30[1]) = *(_DWORD *)(a2 + 4);
      v30[2] = PerformanceCount.QuadPart;
      v9 = *(unsigned __int8 *)(a2 + 23);
      LODWORD(v30[5]) = 2848;
      if ( v9 )
      {
        v10 = (int *)&v30[7] + 1;
        v11 = (__int16 *)(a2 + 28);
        v12 = v9;
        do
        {
          v13 = *(v11 - 1);
          *(v10 - 1) = (unsigned __int16)*(v11 - 2);
          v10[2] = *v11;
          v10[3] = v11[1];
          *v10 = (v13 & 8) != 0;
          v14 = (v13 & 8) != 0;
          if ( (v13 & 3) != 0 )
          {
            v14 |= 2u;
            *v10 = v14;
          }
          if ( (v13 & 0x2000) != 0 )
            *v10 = v14 | 4;
          v15 = v30[86];
          if ( v13 < 0 )
            v15 = 1;
          ++LODWORD(v30[6]);
          v11 += 28;
          LOBYTE(v30[86]) = v15;
          v10 += 12;
          --v12;
        }
        while ( v12 );
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 40) + 24LL))(*(_QWORD *)(a1 + 40), v30);
      v5 = v16;
      if ( v16 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, 668, v16);
        goto LABEL_36;
      }
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 1) != 0 )
  {
    McTemplateU0p();
  }
  return (unsigned int)v5;
}
