/*
 * XREFs of ?CloseCallback@CTTMDEVICE@@CAX_K@Z @ 0x1C01B08B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

void __fastcall CTTMDEVICE::CloseCallback(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  struct _KEVENT *v8; // rcx

  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 4211LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 156, 1u);
  v7 = (unsigned int)(v6 >> 31);
  LODWORD(v7) = v6 % 32;
  *((_DWORD *)a1 + 2 * v7 + 157) = 1073741826;
  *((_DWORD *)a1 + 2 * (unsigned int)(v6 % 32) + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  if ( *((_BYTE *)a1 + 905) )
  {
    operator delete(a1);
  }
  else
  {
    ExReInitializeRundownProtection((PEX_RUNDOWN_REF)a1 + 6);
    v8 = (struct _KEVENT *)*((_QWORD *)a1 + 7);
    if ( v8 )
    {
      KeSetEvent(v8, 0, 0);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
}
