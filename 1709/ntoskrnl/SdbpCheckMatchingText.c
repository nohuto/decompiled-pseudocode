/*
 * XREFs of SdbpCheckMatchingText @ 0x14076E9C0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SdbpCheckMatchingTextEntry @ 0x14076EAE4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x14076F4D4 (SdbpGetMatchingTextAttributes.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingText(_DWORD *a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v6; // esi
  const char *v9; // r9
  int v10; // r8d
  __int64 v11; // rdi
  int v13; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+54h] [rbp-1Ch] BYREF
  int v15; // [rsp+58h] [rbp-18h] BYREF
  int v16; // [rsp+5Ch] [rbp-14h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h] BYREF
  __int64 v18; // [rsp+68h] [rbp-8h] BYREF
  int v19; // [rsp+90h] [rbp+20h] BYREF

  v6 = 0;
  v19 = 0x2000;
  *a1 = 0;
  v16 = 0;
  v15 = 0;
  v18 = 0LL;
  P = 0LL;
  v14 = 0;
  v13 = 0;
  if ( !(unsigned int)SdbpGetMatchingTextAttributes(
                        a3,
                        a5,
                        (unsigned int)&v18,
                        (unsigned int)&P,
                        (__int64)&v14,
                        (__int64)&v13,
                        (__int64)&v19) )
  {
    v9 = "Failed to read MATCHING_TEXT entry";
    v10 = 1737;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingText", v10, (_DWORD)v9);
    goto LABEL_7;
  }
  v11 = a6;
  if ( !(unsigned int)SdbpCheckMatchingTextEntry(a2, a6, v18, (_DWORD)P, v14, v13, v19, (__int64)&v16, (__int64)&v15) )
  {
    v9 = "Failed to check MATCHING_TEXT entry";
    v10 = 1754;
    goto LABEL_3;
  }
  v6 = 1;
  *(_DWORD *)(v11 + 80) |= v15;
  *a1 = v16;
LABEL_7:
  if ( P )
    ExFreePoolWithTag(P, 0x74705041u);
  return v6;
}
