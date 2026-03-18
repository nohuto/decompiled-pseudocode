/*
 * XREFs of ?GetEffectiveInputSink@CInteraction@@UEBAXKPEAPEAXPEA_K@Z @ 0x180169340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::GetEffectiveInputSink(CInteraction *this, int a2, void **a3, unsigned __int64 *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  unsigned __int64 v7; // rax

  v4 = a2 - 2;
  if ( !v4 )
  {
LABEL_8:
    *a3 = (void *)*((_QWORD *)this + 10);
    v7 = *((_QWORD *)this + 14);
    goto LABEL_9;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        *a4 = 0LL;
        return;
      }
      goto LABEL_8;
    }
    *a3 = (void *)*((_QWORD *)this + 8);
    v7 = *((_QWORD *)this + 12);
  }
  else
  {
    *a3 = (void *)*((_QWORD *)this + 11);
    v7 = *((_QWORD *)this + 15);
  }
LABEL_9:
  *a4 = v7;
}
