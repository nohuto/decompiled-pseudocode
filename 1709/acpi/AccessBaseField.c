/*
 * XREFs of AccessBaseField @ 0x1C00173C0
 * Callers:
 *     WriteFieldObj @ 0x1C00168F0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C0016D90 (ReadFieldObj.c)
 * Callees:
 *     ReadSystemIO @ 0x1C0016648 (ReadSystemIO.c)
 *     WriteSystemMem @ 0x1C0018728 (WriteSystemMem.c)
 *     WriteSystemIO @ 0x1C001886C (WriteSystemIO.c)
 *     ReadSystemMem @ 0x1C00189E0 (ReadSystemMem.c)
 *     PushFrame @ 0x1C0018B78 (PushFrame.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall AccessBaseField(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4, int a5)
{
  unsigned int v5; // r11d
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned __int64 v11; // r15
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  char v16; // r9
  int v17; // ecx
  __int64 v18; // rbx
  char v19; // bp
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v24; // rcx
  char v25; // al
  int (__fastcall *v26)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v29; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+20h] BYREF

  v5 = a3[3];
  v6 = 0LL;
  v7 = *(_QWORD *)(a2 + 96);
  v9 = 0;
  v10 = 1;
  v11 = *(_QWORD *)v7 + *a3;
  if ( (v5 & 0xF) - 1 <= 3 )
    v10 = 1 << ((v5 & 0xF) - 1);
  v12 = a3[2];
  if ( v12 >= 0x20 )
    v13 = 0LL;
  else
    v13 = 1LL << v12;
  v14 = (v13 - 1) << a3[1];
  if ( 8 * v10 >= 0x20 )
    v15 = 0LL;
  else
    v15 = 1LL << (8 * (unsigned __int8)v10);
  *a4 &= v14;
  v16 = a5;
  LOBYTE(v29) = (v5 & 0x60) == 0 && (~v14 & (v15 - 1)) != 0;
  if ( !(_BYTE)a5 && (a3[3] & 0x60) == 0x20 )
    *a4 |= ~v14;
  v17 = *(unsigned __int8 *)(v7 + 12);
  if ( !*(_BYTE *)(v7 + 12) )
  {
    if ( !v16 )
    {
      if ( (_BYTE)v29 )
        *a4 |= ReadSystemMem((void *)v11, v10);
      WriteSystemMem((void *)v11, v10);
      return v9;
    }
    a5 = 0;
    v29 = 0LL;
    if ( v10 > 8 )
    {
      v22 = -1LL;
      goto LABEL_33;
    }
    if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
      || (v26 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144)) == 0LL
      || v26(0LL, v11, &v29, v10, &a5) < 0 )
    {
      if ( v10 != 1LL )
        v6 = v11 % v10;
      if ( !v6 )
      {
        switch ( v10 )
        {
          case 1u:
            v21 = *(unsigned __int8 *)v11;
            break;
          case 4u:
            v21 = *(unsigned int *)v11;
            break;
          case 2u:
            v21 = *(unsigned __int16 *)v11;
            break;
          case 8u:
            v21 = *(_QWORD *)v11;
            break;
          default:
            v21 = -1LL;
            break;
        }
        goto LABEL_32;
      }
      memmove(&v29, (const void *)v11, v10);
    }
    v21 = v29;
LABEL_32:
    v22 = v14 & v21;
LABEL_33:
    *a4 = v22;
    return v9;
  }
  if ( v17 == 1 )
  {
    if ( v16 )
    {
      *a4 = (unsigned int)ReadSystemIO((unsigned int)v11, v10, v14);
    }
    else
    {
      if ( (_BYTE)v29 )
        *a4 = (unsigned int)ReadSystemIO((unsigned int)v11, v10, ~(_DWORD)v14) | (unsigned __int64)*a4;
      WriteSystemIO((unsigned int)v11, v10, *(unsigned int *)a4);
    }
  }
  else
  {
    v18 = gpRSAccessHead;
    if ( !gpRSAccessHead )
      goto LABEL_53;
    while ( *(_DWORD *)(v18 + 8) != v17 )
    {
      v18 = *(_QWORD *)v18;
      if ( !v18 )
        goto LABEL_53;
    }
    if ( v18 && *(_QWORD *)(v18 + 16) )
    {
      if ( v16 )
      {
        v19 = 0;
        if ( (gDebugger & 0x100) != 0 )
        {
          _m_prefetchw(&gDebugger);
          v19 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
        }
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(), __int64))(v18 + 16))(
                0LL,
                a2 + 120,
                v11,
                v10,
                a4,
                *(_QWORD *)(v18 + 24),
                RestartCtxtCallback,
                a1 + 328);
        v9 = v20;
        if ( (v19 & 0x10) != 0 )
          _InterlockedOr(&gDebugger, 0x10u);
        if ( v20 == 259 )
        {
          return 32772;
        }
        else if ( v20 )
        {
          LogError(3222536216LL);
          AcpiDiagTraceAmlError(a1, 3222536216LL);
          PrintDebugMessage(2, *(unsigned __int8 *)(v7 + 12), v9, 0, 0LL);
          return (unsigned int)-1072431080;
        }
      }
      else
      {
        v9 = PushFrame(a1, 1094931031, 96, (unsigned int)WriteCookAccess, (__int64)&v30);
        if ( !v9 )
        {
          v24 = v30;
          *(_QWORD *)(v30 + 32) = a2;
          *(_QWORD *)(v24 + 40) = v18;
          *(_QWORD *)(v24 + 48) = v11;
          *(_DWORD *)(v24 + 56) = v10;
          *(_QWORD *)(v24 + 64) = *a4;
          v25 = v29;
          *(_QWORD *)(v24 + 72) = v14;
          *(_BYTE *)(v24 + 88) = v25;
        }
      }
    }
    else
    {
LABEL_53:
      v9 = -1072431088;
      LogError(3222536208LL);
      AcpiDiagTraceAmlError(a1, 3222536208LL);
      PrintDebugMessage(1, *(unsigned __int8 *)(v7 + 12), 0, 0, 0LL);
    }
  }
  return v9;
}
