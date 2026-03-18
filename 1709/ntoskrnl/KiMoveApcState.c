/*
 * XREFs of KiMoveApcState @ 0x1400C001C
 * Callers:
 *     KiDetachProcess @ 0x1400BF4A0 (KiDetachProcess.c)
 *     KiAttachProcess @ 0x1400BFEE0 (KiAttachProcess.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall KiMoveApcState(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 *v3; // r8
  __int64 **result; // rax
  _QWORD *v5; // rax
  __int64 ***v6; // rcx

  *(_QWORD *)(a2 + 32) = a1[4];
  *(_BYTE *)(a2 + 40) = *((_BYTE *)a1 + 40);
  *(_BYTE *)(a2 + 41) = *((_BYTE *)a1 + 41);
  *(_BYTE *)(a2 + 42) = *((_BYTE *)a1 + 42);
  v2 = *a1;
  if ( (__int64 *)*a1 == a1 )
  {
    *(_QWORD *)(a2 + 8) = a2;
    *(_QWORD *)a2 = a2;
    *(_BYTE *)(a2 + 41) = 0;
  }
  else
  {
    v5 = (_QWORD *)a1[1];
    *(_QWORD *)a2 = v2;
    *(_QWORD *)(a2 + 8) = v5;
    *(_QWORD *)(v2 + 8) = a2;
    *v5 = a2;
  }
  v3 = (__int64 *)a1[2];
  result = (__int64 **)(a2 + 16);
  if ( v3 == a1 + 2 )
  {
    *(_QWORD *)(a2 + 24) = a2 + 16;
    *result = (__int64 *)result;
    *(_BYTE *)(a2 + 42) = 0;
  }
  else
  {
    v6 = (__int64 ***)a1[3];
    *result = v3;
    *(_QWORD *)(a2 + 24) = v6;
    v3[1] = (__int64)result;
    *v6 = result;
  }
  return result;
}
