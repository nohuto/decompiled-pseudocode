/*
 * XREFs of itrp_SH_Common @ 0x1C02D9A4C
 * Callers:
 *     itrp_SHC @ 0x1C02D8B20 (itrp_SHC.c)
 *     itrp_SHE @ 0x1C02D8F60 (itrp_SHE.c)
 *     itrp_SHP @ 0x1C02D9490 (itrp_SHP.c)
 * Callees:
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 *     InvokeProject @ 0x1C02CF6B4 (InvokeProject.c)
 */

_QWORD *__fastcall itrp_SH_Common(_DWORD *a1, _DWORD *a2, int *a3, char a4)
{
  int v7; // edi
  _QWORD *v8; // rbx
  int v9; // eax
  __int16 v10; // cx
  __int64 v11; // rsi
  bool v12; // zf
  __int16 v13; // ax
  int v14; // eax
  _QWORD *result; // rax

  if ( (a4 & 1) != 0 )
  {
    v7 = HIDWORD(qword_1C032CA10);
    v8 = (_QWORD *)LocalGS;
  }
  else
  {
    v7 = dword_1C032CA18;
    v8 = (_QWORD *)qword_1C032C9C8;
  }
  v9 = InvokeProject(
         dword_1C032CA30,
         *(_DWORD *)(*v8 + 4LL * v7) - *(_DWORD *)(v8[2] + 4LL * v7),
         *(_DWORD *)(v8[1] + 4LL * v7) - *(_DWORD *)(v8[3] + 4LL * v7));
  v10 = word_1C032CA28;
  v11 = v9;
  v12 = word_1C032CA28 == 0x4000;
  *a2 = 0;
  v13 = dword_1C032C9DC;
  *a1 = 0;
  if ( v12 )
  {
    if ( v13 )
      *a1 = ((unsigned __int64)(v11 * v13) >> 32 << 18) + ((((unsigned int)(v11 * v13) >> 13) + 1) >> 1);
    if ( HIWORD(dword_1C032C9DC) )
      *a2 = ((unsigned __int64)(v11 * SHIWORD(dword_1C032C9DC)) >> 32 << 18)
          + ((((unsigned int)(v11 * SHIWORD(dword_1C032C9DC)) >> 13) + 1) >> 1);
  }
  else
  {
    if ( v13 )
    {
      v14 = CompDiv(v10, v11 * v13);
      v10 = word_1C032CA28;
      *a1 = v14;
    }
    if ( HIWORD(dword_1C032C9DC) )
      *a2 = CompDiv(v10, v11 * SHIWORD(dword_1C032C9DC));
  }
  result = v8;
  *a3 = v7;
  return result;
}
