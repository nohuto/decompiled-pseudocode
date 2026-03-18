/*
 * XREFs of ?GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180167BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x180168AD4 (-_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z.c)
 */

__int64 __fastcall CManipulation::GetProperty(CManipulation *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // xmm0_4
  int v13; // eax
  unsigned int v14; // edx

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  if ( !a2 )
  {
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + 228);
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 59);
    goto LABEL_25;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    *((_DWORD *)a3 + 16) = 52;
    v14 = 1;
    *(_QWORD *)a3 = *((_QWORD *)this + 30);
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 62);
    goto LABEL_23;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v12 = *((_DWORD *)this + 63);
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v14 = 3;
    *(_DWORD *)a3 = *((_DWORD *)this + 66);
    *((_DWORD *)a3 + 16) = 18;
LABEL_23:
    *((_BYTE *)a3 + 68) = 1;
    CManipulation::_EnqueueDeferredDeltaReset((CManipulation *)((char *)this - 8), v14);
    return v3;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *((_QWORD *)this + 35);
    v13 = *((_DWORD *)this + 72);
    goto LABEL_17;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *((_DWORD *)a3 + 16) = 265;
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + 292);
    *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + 308);
    *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + 324);
    *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + 340);
    goto LABEL_25;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + 356);
    v13 = *((_DWORD *)this + 91);
LABEL_17:
    *((_DWORD *)a3 + 2) = v13;
    goto LABEL_25;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v12 = *((_DWORD *)this + 92);
LABEL_15:
    *(_DWORD *)a3 = v12;
    *((_DWORD *)a3 + 16) = 18;
    goto LABEL_25;
  }
  if ( v11 == 2 )
  {
    *((_DWORD *)a3 + 16) = 17;
    *(_BYTE *)a3 = 1;
LABEL_25:
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
  return (unsigned int)-2147024809;
}
