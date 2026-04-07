/*
 * XREFs of ?_LookupAnimationClockIdFromStoryboard@CAnimationScheduler@@AEAAJHPEBU_GUID@@PEAU2@PEAH@Z @ 0x180005098
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x180004F64 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationScheduler::_LookupAnimationClockIdFromStoryboard(
        CAnimationScheduler *this,
        int a2,
        const struct _GUID *a3,
        struct _GUID *a4,
        int *a5)
{
  unsigned int v5; // ecx
  int v7; // r8d
  _DWORD *i; // r11
  __int64 v10; // rax
  __int64 v11; // rax

  v5 = 0;
  *a4 = GUID_NULL;
  if ( a5 )
    *a5 = 1;
  v7 = 0;
  for ( i = dword_1800C0310; ; i += 10 )
  {
    if ( *i == a2 )
    {
      v10 = *(_QWORD *)&dword_1800C0310[10 * v7 + 1] - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v10 )
        v10 = *(_QWORD *)&dword_1800C0310[10 * v7 + 3] - *(_QWORD *)GUID_NULL.Data4;
      if ( !v10 )
        break;
      if ( a3 )
      {
        v11 = *(_QWORD *)&dword_1800C0310[10 * v7 + 1] - *(_QWORD *)&a3->Data1;
        if ( !v11 )
          v11 = *(_QWORD *)&dword_1800C0310[10 * v7 + 3] - *(_QWORD *)a3->Data4;
        if ( !v11 )
          break;
      }
    }
    if ( (unsigned int)++v7 >= 0xA )
      return (unsigned int)CoCreateGuid(a4);
  }
  *a4 = *(struct _GUID *)&dword_1800C0310[10 * v7 + 5];
  if ( a5 )
    *a5 = dword_1800C0310[10 * v7 + 9];
  return v5;
}
