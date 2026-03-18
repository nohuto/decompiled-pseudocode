/*
 * XREFs of AcpiPccAcquireSubspaceCore @ 0x1C0052E88
 * Callers:
 *     AcpiPccAcquireSubspaceAsync @ 0x1C0052E70 (AcpiPccAcquireSubspaceAsync.c)
 *     AcpiPccAcquireSubspace @ 0x1C00A31C0 (AcpiPccAcquireSubspace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiPccAcquireSubspaceCore(unsigned int *a1, int *a2, __int64 a3, int **a4)
{
  unsigned int v8; // ebx
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r15
  unsigned int v11; // eax
  int v12; // ecx
  int **v13; // rax
  int *v14; // rdi
  unsigned int v15; // eax

  if ( a2 )
  {
    v9 = (KSPIN_LOCK *)(a1 + 130);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 65);
    v11 = *a1;
    v12 = (*a1 >> 2) & 0xF;
    if ( v12 == 3 )
    {
      *((_QWORD *)a1 + 16) = a2;
      *((_QWORD *)a1 + 17) = a3;
      *a1 = v11 & 0xFFFFFFC3 | 0x10;
      v8 = 259;
      KeInsertQueueDpc((PRKDPC)a1 + 7, 0LL, 0LL);
LABEL_16:
      KeReleaseSpinLock(v9, v10);
      return v8;
    }
    if ( a4 )
    {
      v13 = (int **)*((_QWORD *)a1 + 15);
      v14 = (int *)(a1 + 28);
      if ( *v13 != v14 )
        __fastfail(3u);
      *a4 = v14;
      a4[1] = (int *)v13;
      *v13 = (int *)a4;
      *((_QWORD *)v14 + 1) = a4;
      a4[6] = a2;
    }
    else
    {
      if ( v12 == 8 )
      {
        v15 = v11 & 0xFFFFFFC3 | 0x28;
      }
      else
      {
        if ( v12 != 9 )
        {
          v8 = -1073740024;
          goto LABEL_16;
        }
        v15 = v11 & 0xFFFFFFC3 | 0x2C;
      }
      *a1 = v15;
      *((_QWORD *)a1 + 16) = a2;
      *((_QWORD *)a1 + 17) = a3;
    }
    v8 = 259;
    goto LABEL_16;
  }
  return (unsigned int)-1073741811;
}
