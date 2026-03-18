/*
 * XREFs of ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180193948
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BF260 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BF920 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     _lambda_b08b79b307586b4cb04ea7780a7f8202_::operator() @ 0x1801CBB88 (_lambda_b08b79b307586b4cb04ea7780a7f8202_--operator().c)
 * Callees:
 *     ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x18019477C (-GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 */

__int64 __fastcall CInteractionTracker::BoundaryFromValue(__int64 a1, float a2, unsigned int a3)
{
  __int64 result; // rax
  float v4; // [rsp+38h] [rbp+10h] BYREF
  float v5; // [rsp+48h] [rbp+20h] BYREF

  CInteractionTracker::GetScrollRange(a1, a3, &v4, &v5);
  result = v4 >= a2;
  if ( a2 >= v5 )
    return (unsigned int)(result + 2);
  return result;
}
