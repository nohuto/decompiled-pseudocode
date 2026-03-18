/*
 * XREFs of ?GetEffectiveInputSink@CInteraction@@UEBAXKPEAPEAXPEAI@Z @ 0x1800D2930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::GetEffectiveInputSink(CInteraction *this, int a2, void **a3, unsigned int *a4)
{
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdx
  unsigned int v7; // eax

  v4 = a2 - 2;
  if ( !v4 )
  {
LABEL_8:
    *a3 = (void *)*((_QWORD *)this + 10);
    v7 = *((_DWORD *)this + 26);
    goto LABEL_9;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 != 1 )
      {
        *a4 = 0;
        nullsub_1(this, v6, a3);
        return;
      }
      goto LABEL_8;
    }
    *a3 = (void *)*((_QWORD *)this + 8);
    v7 = *((_DWORD *)this + 24);
  }
  else
  {
    *a3 = (void *)*((_QWORD *)this + 11);
    v7 = *((_DWORD *)this + 27);
  }
LABEL_9:
  *a4 = v7;
  ((void (*)(void))nullsub_1)();
}
