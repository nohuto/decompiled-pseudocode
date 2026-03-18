/*
 * XREFs of AccessBaseField @ 0x1C004C1C0
 * Callers:
 *     AccessFieldData @ 0x1C004C4E0 (AccessFieldData.c)
 * Callees:
 *     PushFrame @ 0x1C0003314 (PushFrame.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     FindRSAccess @ 0x1C00467E8 (FindRSAccess.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     ReadSystemIO @ 0x1C004D8A8 (ReadSystemIO.c)
 *     ReadSystemMem @ 0x1C004D91C (ReadSystemMem.c)
 *     WriteSystemIO @ 0x1C004E34C (WriteSystemIO.c)
 *     WriteSystemMem @ 0x1C004E3B4 (WriteSystemMem.c)
 */

__int64 __fastcall AccessBaseField(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4, char a5)
{
  __int64 v5; // rbp
  const void *v6; // rbx
  __int64 v7; // rdx
  unsigned int v10; // r8d
  void *v11; // rbp
  unsigned int v12; // ecx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // rax
  char v18; // r11
  __int64 v19; // r10
  __int64 v20; // rcx
  bool v21; // r12
  __int64 v22; // r8
  int v23; // ecx
  __int64 RSAccess; // rax
  char v25; // r11
  __int64 v26; // r13
  __int64 (__fastcall *v27)(_QWORD, __int64, void *, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(__int64), __int64); // r10
  char v28; // r14
  char v29; // al
  int v30; // eax
  __int64 v31; // rcx
  __int64 SystemIO; // rax
  __int64 v36; // [rsp+B0h] [rbp+18h]
  __int64 v37; // [rsp+B8h] [rbp+20h] BYREF

  v5 = *a3;
  LODWORD(v6) = 0;
  v7 = *(_QWORD *)(a2 + 96);
  v36 = v7;
  v10 = a3[3];
  v11 = (void *)(*(_QWORD *)v7 + v5);
  v12 = (v10 & 0xF) - 1;
  v13 = 1;
  if ( v12 <= 3 )
    v13 = 1 << v12;
  v14 = a3[2];
  if ( v14 < 0x20 )
    v15 = 1LL << v14;
  else
    v15 = 0LL;
  v16 = (v15 - 1) << a3[1];
  if ( 8 * v13 < 0x20 )
    v17 = 1LL << (8 * (unsigned __int8)v13);
  else
    v17 = 0LL;
  v18 = a5;
  v19 = ~v16;
  v20 = v16 & *a4;
  v21 = (v10 & 0x60) == 0 && (~v16 & (v17 - 1)) != 0;
  *a4 = v20;
  v22 = v20;
  if ( !v18 && (a3[3] & 0x60) == 0x20 )
  {
    v22 = v20 | v19;
    *a4 = v20 | v19;
  }
  v23 = *(unsigned __int8 *)(v7 + 12);
  if ( *(_BYTE *)(v7 + 12) )
  {
    if ( v23 != 1 )
    {
      RSAccess = FindRSAccess(v23);
      v26 = RSAccess;
      if ( RSAccess
        && (v27 = *(__int64 (__fastcall **)(_QWORD, __int64, void *, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(__int64), __int64))(RSAccess + 16)) != 0LL )
      {
        if ( v25 )
        {
          v28 = 0;
          if ( (gDebugger & 0x100) != 0 )
          {
            _m_prefetchw(&gDebugger);
            v29 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
            v27 = *(__int64 (__fastcall **)(_QWORD, __int64, void *, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v26 + 16);
            v28 = v29;
          }
          v30 = v27(0LL, a2 + 120, v11, v13, a4, *(_QWORD *)(v26 + 24), RestartCtxtCallback, a1 + 328);
          v6 = (const void *)v30;
          if ( (v28 & 0x10) != 0 )
            _InterlockedOr(&gDebugger, 0x10u);
          if ( v30 == 259 )
          {
            LODWORD(v6) = 32772;
          }
          else if ( v30 )
          {
            LogError(-1072431080);
            AcpiDiagTraceAmlError(a1, -1072431080);
            PrintDebugMessage(2, (const void *)*(unsigned __int8 *)(v36 + 12), v6, 0LL, 0LL);
            LODWORD(v6) = -1072431080;
          }
        }
        else
        {
          LODWORD(v6) = PushFrame(a1, 1094931031, 96LL, (__int64)WriteCookAccess, &v37);
          if ( !(_DWORD)v6 )
          {
            v31 = v37;
            *(_QWORD *)(v37 + 32) = a2;
            *(_QWORD *)(v31 + 40) = v26;
            *(_QWORD *)(v31 + 48) = v11;
            *(_DWORD *)(v31 + 56) = v13;
            *(_QWORD *)(v31 + 64) = *a4;
            *(_QWORD *)(v31 + 72) = v16;
            *(_BYTE *)(v31 + 88) = v21;
          }
        }
      }
      else
      {
        LODWORD(v6) = -1072431088;
        LogError(-1072431088);
        AcpiDiagTraceAmlError(a1, -1072431088);
        PrintDebugMessage(1, (const void *)*(unsigned __int8 *)(v36 + 12), 0LL, 0LL, 0LL);
      }
      return (unsigned int)v6;
    }
    if ( v18 )
    {
      SystemIO = (unsigned int)ReadSystemIO((unsigned int)v11, v13, (unsigned int)v16);
LABEL_35:
      *a4 = SystemIO;
      return (unsigned int)v6;
    }
    if ( v21 )
    {
      *a4 = (unsigned int)ReadSystemIO((unsigned int)v11, v13, (unsigned int)~(_DWORD)v16) | (unsigned __int64)*a4;
      v22 = *a4;
    }
    WriteSystemIO((unsigned int)v11, v13, v22);
  }
  else
  {
    if ( v18 )
    {
      SystemIO = ReadSystemMem(v11, v13);
      goto LABEL_35;
    }
    if ( v21 )
      *a4 |= ReadSystemMem(v11, v13);
    WriteSystemMem(v11, v13);
  }
  return (unsigned int)v6;
}
