/*
 * XREFs of BcpSanitizeDriverName @ 0x14029154C
 * Callers:
 *     BcpDisplayErrorInformation @ 0x140290DF8 (BcpDisplayErrorInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpSanitizeDriverName(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r11
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  _WORD *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r10
  __int16 v12; // r8
  unsigned __int64 v13; // rdi
  __int64 result; // rax

  v3 = *a1;
  v4 = *(unsigned __int16 *)(a2 + 2) - 2LL;
  v5 = *((_QWORD *)a1 + 1);
  v6 = *(_QWORD *)(a2 + 8);
  if ( v3 >= v4 )
    v7 = v4 >> 1;
  else
    LODWORD(v7) = (unsigned int)v3 >> 1;
  v8 = 0;
  if ( (_DWORD)v7 )
  {
    v9 = *(_WORD **)(a2 + 8);
    v8 = v7;
    v10 = v5 - v6;
    v11 = (unsigned int)v7;
    do
    {
      v12 = *(_WORD *)((char *)v9 + v10);
      if ( (unsigned __int16)(v12 - 32) <= 0x3Fu
        && (v13 = 0x87FFFFFE03FF4001uLL, _bittest64((const __int64 *)&v13, (unsigned __int16)(v12 - 32)))
        || (unsigned __int16)(v12 - 97) <= 0x19u )
      {
        *v9 = v12;
      }
      else
      {
        *v9 = 32;
      }
      ++v9;
      --v11;
    }
    while ( v11 );
  }
  result = v8;
  *(_WORD *)a2 = 2 * v8;
  *(_WORD *)(v6 + 2LL * v8) = 0;
  return result;
}
