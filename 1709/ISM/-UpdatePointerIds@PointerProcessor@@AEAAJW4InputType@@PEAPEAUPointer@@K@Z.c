/*
 * XREFs of ?UpdatePointerIds@PointerProcessor@@AEAAJW4InputType@@PEAPEAUPointer@@K@Z @ 0x180071954
 * Callers:
 *     ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180070F70 (-OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall PointerProcessor::UpdatePointerIds(__int64 a1, char a2, _DWORD **a3, int a4)
{
  unsigned int v4; // ebx
  int v7; // r9d
  int v8; // edi
  unsigned __int16 v9; // r15
  _DWORD *v10; // r8
  int v11; // r14d
  int v12; // r9d
  unsigned int v13; // ecx
  _DWORD *v14; // rax
  unsigned int v15; // esi
  char v16; // r10
  __int64 v17; // rax
  _DWORD *v18; // r11
  unsigned int v19; // eax
  _DWORD *v20; // rcx
  char v21; // al
  __int64 v22; // rax
  _DWORD *v23; // rcx
  char v24; // al

  v4 = 0;
  if ( (a2 & 2) != 0 )
  {
    if ( a4 == 1 )
    {
      **a3 = 1;
    }
    else
    {
      v4 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 603;
LABEL_50:
        McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v7, v4);
      }
    }
  }
  else
  {
    v8 = 0;
    if ( a4 )
    {
      v9 = PointerProcessor::s_usNextPointerId;
      v10 = (_DWORD *)(a1 + 80);
      while ( 1 )
      {
        v11 = v10[20];
        v12 = *a3[v8];
        if ( v12 == v11 )
          break;
        v13 = 0;
        v14 = v10;
        while ( *v14 != v12 )
        {
          ++v13;
          v14 += 2;
          if ( v13 >= 0xA )
            goto LABEL_12;
        }
        v22 = 0LL;
        v23 = v10;
        while ( *v23 != v12 )
        {
          v22 = (unsigned int)(v22 + 1);
          v23 += 2;
          if ( (unsigned int)v22 >= 0xA )
          {
            v24 = Microsoft_OneCore_MinInputEnableBits;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              McTemplateU0qqq((__int64)v23, &MinInput_Warning_CheckResult, 0, 132, 5);
              v24 = Microsoft_OneCore_MinInputEnableBits;
            }
            v4 = -2147467259;
            if ( (v24 & 2) != 0 )
              McTemplateU0qqq((__int64)v23, &MinInput_Warning_CheckResult, 0, 616, 5);
            return v4;
          }
        }
        LODWORD(a1) = v10[2 * v22 + 1];
LABEL_24:
        *a3[v8] = a1;
        if ( !a3[v8][1] )
        {
          v19 = 0;
          v20 = v10;
          do
          {
            if ( *v20 == v12 )
            {
              v10[2 * v19] = v10[20];
              goto LABEL_41;
            }
            ++v19;
            v20 += 2;
          }
          while ( v19 < 0xA );
          v21 = Microsoft_OneCore_MinInputEnableBits;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq((__int64)v20, &MinInput_Warning_CheckResult, 0, 212, 5);
            v21 = Microsoft_OneCore_MinInputEnableBits;
          }
          v4 = -2147467259;
          if ( (v21 & 2) != 0 )
            McTemplateU0qqq((__int64)v20, &MinInput_Warning_CheckResult, 0, 627, 5);
          return v4;
        }
LABEL_41:
        if ( ++v8 == a4 )
          return v4;
      }
LABEL_12:
      if ( v9 == 0xFFFF )
        v9 = 2;
      a1 = v9;
      v15 = 0;
      ++v9;
      v16 = 0;
      PointerProcessor::s_usNextPointerId = v9;
      if ( v12 == v11 )
      {
        v4 = -2147024809;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v4;
        McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, 152, 87);
      }
      else
      {
        v17 = 0LL;
        v18 = v10;
        do
        {
          if ( *v18 == v12 )
            goto LABEL_23;
          if ( !v16 && *v18 == v11 )
          {
            v15 = v17;
            v16 = 1;
          }
          v17 = (unsigned int)(v17 + 1);
          v18 += 2;
        }
        while ( (unsigned int)v17 < 0xA );
        if ( v16 )
        {
          v17 = v15;
          v10[2 * v15] = v12;
LABEL_23:
          v10[2 * v17 + 1] = a1;
          goto LABEL_24;
        }
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, 182, 5);
        v4 = -2147467259;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 621;
        goto LABEL_50;
      }
    }
  }
  return v4;
}
