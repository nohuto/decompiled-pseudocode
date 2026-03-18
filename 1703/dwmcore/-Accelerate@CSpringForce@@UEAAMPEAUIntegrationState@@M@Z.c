/*
 * XREFs of ?Accelerate@CSpringForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x1800CCEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CSpringForce::Accelerate(CSpringForce *this, struct IntegrationState *a2, float a3)
{
  float result; // xmm0_4

  LODWORD(result) = COERCE_UNSIGNED_INT(
                      (float)((float)(*((float *)a2 + 1) - *((float *)this + 25)) * *((float *)this + 20))
                    + (float)(*((float *)this + 21) * *((float *)a2 + 2))) ^ _xmm;
  return result;
}
